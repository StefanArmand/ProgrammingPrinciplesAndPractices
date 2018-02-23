#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	string operation{ " " };
	double val1 = 0;
	double val2 = 0;
	cout << "Write the operation you want as +, -, *, /, plus, minus, mul, div\n";
	cin >> operation;
	cout << "Enter the first operand\n";
	cin >> val1;
	cout << "Enter the second operand\n";
	cin >> val2;
	if (operation == "+"){ cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";}
	else if (operation == "-") { cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n"; }
	else if (operation == "*") { cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n"; }
	else if (operation == "/") { cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n"; }
	else if (operation == "plus") { cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n"; }
	else if (operation == "minus") { cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n"; }
	else if (operation == "mul") { cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n"; }
	else if (operation == "div") { cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n"; }
	keep_window_open();
}