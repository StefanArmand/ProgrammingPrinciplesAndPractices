#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// Book class. Class Book shoud have members for the ISBN, title, author, and copyright date. Also store data on whether the book is checked out. 
// Create functions for returning those data values. Create functions for checking a book in and out. 
// Do simple validation of data entered in a book, for example accept ISBN's only in the form n-n-n-x where n is an integer and x is a digit or letter. Store an ISBN as a string.

class Book{
public:
	ISBN isbn() { return in; }
	string title() { return t; }
	string author() { return a; }
	bool checked_out() { return ch_out; }
	Genre genre() { return g;  }
	//void copyrightd();

	Book(ISBN isbn, string title, string author, Genre genre, bool checked_out) :
		in(isbn),
		t(title),
		a(author),
		g(genre),
		ch_out(checked_out) {}; // constructor

private:
	ISBN in;
	string t;
	string a;
	bool ch_out;
	Genre g;
};

struct ISBN {
	int n1;
	int n2;
	int n3;
	char x;

	ISBN(int n1, int n2, int n3, char x);
};

enum Genre {
	fiction = 0, nonfiction, periodical, biography, children
};

ISBN::ISBN(int n1, int n2, int n3, char x) :
	n1(n1), n2(n2), n3(n3), x(x) {
}

bool operator == (Book& b1, Book& b2) {
	return (b1.isbn() == b2.isbn());
}

//Ex6: create overload operators. the == to check wether ISBN numbers are the same for two books. != compare the ISBN numbers, << print out the title, author and ISBN on separate lines.
bool operator==(const Book& b1,const Book& b2);
bool operator==(const ISBN& b1, const ISBN& b2);
bool operator!=(const Book& b1, const Book& b2);
ostream& operator<<(ostream& os, const Book& b);


// Ex8: create a patron class for the library. The class will have a user's name, library card number, library fees. 
// Have functions that access this data as well as a function to set the fee of the user. 
// Have a helper function that returns a Boolean depending on whether or not the user owes a fee.


class Patron {
public:
	string u_name() { return name; }
	int c_number() { return number;  }
	int u_fees() { return fees; }
	bool u_debt() { return debt; }

	Patron(string name, int number, int fees, bool debt);

private:
	string name;
	int number;
	int fees;
	bool debt;
};

Patron::Patron(string na, int cn, int lf, bool dbt):  // na = name, cn = card number, lf = library fees
	name(na), number(cn), fees(lf), debt(dbt)
{
}

//Ex9. Create a library class. Include vectors of Books and Patrons. Include a struct called Transaction. Have it include a Book, a Patron, and a Date from the chapter. Make a vector of transactions.
// Create functions to add books to the library, add patrons to the library, and check out books. Whenever a user checks out a book, have the library make sure that both the user and the book are in the library.
// If they aren't report error. Then check that the user owes no fees, if he does report an error. If not, create a transaction, and place it in the vector of Transactions. 
// Also write a function that contains the names of all Patrons who owe fees.

struct Transaction {
	Book b;
	Patron p;
	Transaction(Book bb, Patron pp);
};

class Library{
public:
	Library(vector<Book> b, vector<Patron> p, vector<Transaction> t) : 
		books(b), patrons(p), transactions(t)
	{
	};

	void add_book( Book& b);
	void add_patron( Patron& p);
	void check_out( Book&b, Patron& p);

	vector<Book> get_books() { return books; }
	vector<Patron> get_patrons() { return patrons; }
	vector<Transaction> get_transactions() { return transactions; }

private: 
	vector<Book> books;
	vector<Patron> patrons;
	vector<Transaction> transactions;
};

void Library::add_book(Book& b) {
	books.push_back(b);
}

void Library::add_patron(Patron& p) {
	patrons.push_back(p);
}
void Library::check_out(Book& b, Patron& p) {
	int b_indx = 0;
	int p_indx = 0;
	transactions.push_back(Transaction(books[b_indx], patrons[p_indx]));
}

int main()
{
	Book b{ ISBN{1, 2, 3, 'c'}, "Jim the best", "is a noob", Genre::nonfiction, true };
	Patron("Jim", 11, 100, 0);

}