#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// simple calculator with four basic math operations, add subtract multiply divide with two input values. 
//Program should prompt users to enter three arguments two doubles and an operation.

int main()
{
	double val1 = 0;
	double val2 = 0;
	char operation = ' ';

	cout << "Please write the first value" << "\n";
	cin >> val1;
	cout << "Please write the second value" << "\n";
	cin >> val2;
	cout << "Please write the operation (+, -, *, /)" << "\n";
	cin >> operation;

	if (operation == '+')
	{
		cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
	}
	else if (operation == '-')
	{
		cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
	}
	else if (operation == '*')
	{
		cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
	}
	else if (operation == '/')
	{
		cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
	}
	else
	{
		cout << "I don't know this operation" << "\n";
	}
	keep_window_open();
}