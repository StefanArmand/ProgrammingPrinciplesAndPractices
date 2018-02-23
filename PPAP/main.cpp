#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	int value = 0;
	cout << "Please enter the number\n";
	cin >> value;
	if (value % 2 == 0) { cout << value << " is even\n"; }
	else { cout << value << " is odd\n"; }
	keep_window_open();
}