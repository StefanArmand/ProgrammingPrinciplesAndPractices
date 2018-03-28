#include "std_lib_facilies.h"
#include <iostream>

class String_stream {
public:
    String_stream();
	string get();
	void putback(string s);
private:
	bool full;       
    string buffer;
};

//------------------------------------------------------------------------------


//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
String_stream::String_stream()
:full(false), buffer(0)    
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void String_stream::putback(string s)
{
    if (full) error("putback() into a full buffer");
    buffer = s;       
    full = true;      
}

//------------------------------------------------------------------------------

string String_stream::get()
{
    if (full) {       // do we already have a Token ready?
        // remove token from buffer
        full=false;
        return buffer;
    } 

    string s = "";
	cin >> s;
	return s;
}

//------------------------------------------------------------------------------

String_stream ss;        // provides get() and putback() 

//------------------------------------------------------------------------------

bool conjunction()
{
	string s = ss.get();
	if (s == "and" || s == "or" || s == "but"){
	return true;
	}
	else {
		false;
	}
}

//------------------------------------------------------------------------------

bool noun()
{
	string s = ss.get();
	if (s == "birds" || s == "fish" || s == "C++"){
	return true;
	}
	else {
		false;
	}
}

//------------------------------------------------------------------------------

bool verb()
{
	string s = ss.get();
	if (s == "rules" || s == "fly" || s == "swim"){
	return true;
	}
	else {
		false;
	}
}
//------------------------------------------------------------------------------

// deal with + and -
bool subject()
{
	string s = ss.get();
	if (s == "the"){
		return noun();
	}
	else {
		ss.putback(s);
		return noun();
	}
}

bool sentence()
{
		return (subject() && verb());
}

//------------------------------------------------------------------------------

int main()
try
{
	bool is_ok = false;
	while(true)
	{
		is_ok = sentence();
		if (!is_ok)
		{
			cout << "not ok\n";
			return 0;
		}
		string s = ss.get();
		if (s == " .")
		{
			cout << "OK\n";
			return 0;
		}
		else
		{
			ss.putback(s);
            is_ok = conjunction();
            if (!is_ok) {
                cout << "Not OK\n";
                return 0;
            }
		}

	}
	keep_window_open();
	return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n'; 
	keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n"; 
	keep_window_open();
    return 2;
}