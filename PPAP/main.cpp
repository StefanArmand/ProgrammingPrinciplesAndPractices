#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// simple Date
struct Date {
	int y;  // year
	int m;  // month in year
	int d;  // day of month
};

// helper functions
void init_day(Date& dd, int y, int m, int d)
{
	if (d < 1 || d > 31) error("init_day: Invalid day");
	if (m < 1 || m > 12) error("init_day: Invalid month");

	dd.y = y;       // We don't check valid year yet
	dd.m = m;
	dd.d = d;
}
void add_day(Date& dd, int n) {
	dd.d += n;
}

// operators
ostream& operator<<(ostream& os, const Date& d) 
	{
		return os << '(' << d.y
			<< ',' << d.m
			<< ',' << d.d << ')';
	}

// se t today to June 25, 1978

void chapter941()
{
	cout << "Chapter 9.4.1:\n";
	Date today;
	init_day(today, 1978, 6, 25);
	Date tomorrow = today;
	add_day(tomorrow, 1);
	cout << "Today: " << today << endl;
	cout << "Tomorrow: " << tomorrow << endl;
	//Date invalid_date;
	//init_day(invalid_date, 2004, 13, -5);
}

void chapter942()
{
	cout << "Chapter 9.4.2:\n";
	Date today;
	init_day(today, 1978, 6, 25);
	Date tomorrow = today;
	add_day(tomorrow, 1);
	cout << "Today: " << today << endl;
	cout << "Tomorrow: " << tomorrow << endl;
	//Date invalid_date;
	//init_day(invalid_date, 2004, 13, -5);
}

int main()
try
{
	chapter941();
	keep_window_open();
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}