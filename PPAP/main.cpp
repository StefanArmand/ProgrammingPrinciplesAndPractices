#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	string value = " ";
	cout << "Write a number in string form\n";
	cin >> value;
	if (value == "zero") { cout << "0\n"; }
	else if (value == "one") { cout << "1\n"; }
	else if (value == "two") { cout << "2\n"; }
	else if (value == "three") { cout << "3\n"; }
	else if (value == "four") { cout << "4\n"; }
	else { cout << "No idea what number is that\n"; }
	keep_window_open();
}