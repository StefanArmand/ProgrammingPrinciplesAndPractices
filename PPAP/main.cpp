#include "std_lib_facilies.h"
/*
    Simple calculator
    This program implements a basic expression calculator.
    Input from cin; output to cout.
    The grammar for input is:
    Calculation:
        Statement
        Print
        Quit
        Help
        Calculation Statement
    Statement:
        Declaration
        Expression
    Declaration:
        "let" Name "=" Expression
        "const" name "=" Expression
    Name:
        letter
        letter Sequence
    Sequence:
        letter
        digit
        "_"
        letter Sequence
        digit Sequence
        "_" Sequence
    Print:
        ";"
    Quit:
        "quit"
    Help
        "help"
    Expression:
        Term
        Expression "+" Term
        Expression "-" Term
    Term:
        Primary
        Term "*" Primary
        Term "/" Primary
        Term "%" Primary
    Primary:
        Number
        "(" Expression ")"
        "-" Primary
        "+" Primary
        "sqrt(" Expression ")"
        "pow(" Expression "," Integer ")"
        Name
        Name "=" Expression
    Number:
        floating-point-literal
    Input comes from cin through the Token_stream called ts.
*/

// a token
struct Token {
	char kind;       
	double value;
	string name;
	Token(char ch) :kind(ch) { } // initialize kind with ch 
	Token(char ch, double val) :kind(ch), value(val) { } // make a token from a char and a double
	Token(char ch, string n) :kind(ch), name(n) { }      // make a Token from a char and a string

};

class Token_stream {
	bool full; // is there a token in the buffer?
	Token buffer; // a token put back using putback
public:
	Token_stream() :full(0), buffer(0) { } // make a token stream that read from cin

	Token get(); // get a token
	void unget(Token t) { buffer=t; full=true; } // put a token back

	void ignore(char c);
};

const char let = '#';   // declaration token
const char quit = 'q';   // quit token
const char print = ';';  // print token
const char number = '8'; // number token
const char name = 'a'; // name token
const double k = 1000;
const char sqrtkey = 's';
const char powkey = 'p';

//read characters from cin and compose a token
Token Token_stream::get()
{
	if (full) { full=false; return buffer; }
	char ch;
	cin >> ch;
	switch (ch) {
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case ';':
	case '=':
		return Token(ch);  // let each character represent itself
	case '.':   // a floating point literal can start with a dot
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':     //numeric literals
	{	cin.unget();
		double val;
		cin >> val;   // read a floating point number
		return Token(number,val);
	}
	default:
		if (isalpha(ch)) {
			string s;
			s += ch;
			while(cin.get(ch) && (isalpha(ch) || isdigit(ch))) s+=ch;
			cin.unget();
			if (s == "let") return Token(let);	//declaration keyword
			if (s == "quit") return Token(name);  // quit keyword
			if (s == "sqrt") return Token(sqrtkey); // sqrt keyword
			if (s == "pow") return Token(powkey); // sqrt keyword
			return Token(name,s);
		}
		error("Bad token");
	}
}

// ignore tokens of specific kind
void Token_stream::ignore(char c)
{
	if (full && c==buffer.kind) {
		full = false;
		return;
	}
	full = false;

	// search input
	char ch = 0;
	while (cin>>ch)
		if (ch==c) return;
}

//type for (name, value) pairs
struct Variable {
	string name;
	double value;
	Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> names;	

double get_value(string s)
{
	for (int i = 0; i<names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ",s);
}

double mypow(double first, int expo)
{
	if (expo == 0)  // if its raised to the 0 power
	{ 
		if (first == 0) return 0;
		return 1;
	}
	double res = first; // for raising to the 1'st power
	for (int i=2; i<=expo; i++)
	{
		res *= first;
	}
}

void set_value(string s, double d)
{
	for (int i = 0; i<=names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ",s);
}

bool is_declared(string s)
{
	for (int i = 0; i<names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts; // provides get() and putback()


double expression();


//deal with numbers, parantheses
double primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '(':
	{	double d = expression();  // handle '(' expression ')'
		t = ts.get();
		if (t.kind != ')') error("'(' expected");
		return d;
	}
		case 's':
	{
		t = ts.get();
		if (t.kind != '(') error("'(' expected");
		double d = expression();
		if (d<0) cout << "square root of negative number impossible\n";
		//if (t.kind != ')') error("')' expected");
		return sqrt(d);
	}
		case 'p':
	{ 
		t = ts.get();
		if (t.kind != '(') error("'(' expected");
		double d = expression();
        if (t.kind != ',') error("',' expected");
		int i = expression();
        if (t.kind != number) error("second argument of 'pow' is not a number");
		return mypow(d, i);
	}
	case '-':
		return - primary();
	case number:
		return t.value;
	case name:
		return get_value(t.name);
	default:
		error("primary expected");
	}
}

// deal with *, /
double term()
{
 	double left = primary();
	Token t = ts.get(); // get the next token from Token_stream
	while(true) {
		switch(t.kind) {
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{	double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.unget(t);
			return left;
		}
	}
}

//deal with + , -
double expression()
{
	double left = term();
	Token t = ts.get(); // get the next token from Token_stream
	while(true) {
		switch(t.kind) {
		case '+':
			left += term();
			t = ts.get();
			break;
		case '-':
			left -= term();
			t = ts.get();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

// assume we have seen "let" or "const"
// handle name = expression
// declare a variable called "name" with the initial value "expression"
double declaration()
{
	Token t = ts.get();
	if (t.kind != name) error ("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of " ,name);
	double d = expression();
	names.push_back(Variable(name,d));
	return d;
}

//handles declarations and expressions
double statement()
{
	Token t = ts.get();
	switch(t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

// clean input after error
void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= "; // used to show the result

//calculate gets the token stream, read each token and if it quits prints the result
void calculate()
{
	while(cin) try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t=ts.get();  // discard all prints
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch(exception& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

//main just initiliazes the calculate function
int main()

	try {
		// predefine name
	//st.declare("k", 1000, true);

		calculate();

		keep_window_open();
		return 0;
	}
	catch (runtime_error& e) {
		cerr << "exception: " << e.what() << endl;
		char c;
		while (cin >>c && c!=';') ;
		return 1;
	}
	catch (...) {
		cerr << "exception\n";
		char c;
		while (cin>>c && c!=';');
		return 2;
	}