#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	double val1 = 0;
	double val2 = 0;
	cout << "Please add the first value\n";
	cin >> val1;
	cout << "Please add the second value\n";
	cin >> val2;
	if (val1 > val2) { cout << val1 << " is larger than " << val2 << "\n"; cout << val2 << " is smaller than " << val1 << "\n"; }
	if (val2 > val1) { cout << val1 << " is smaller than " << val2 << "\n"; cout << val2 << " is larger than " << val1 << "\n"; }
	cout << "The sum of the two is " << val1 + val2 << "\n";
	cout << "The product of the two is " << val1 * val2 << "\n";
	cout << "The ratio of the two is " << val1 / val2 << "\n";
	keep_window_open();
}