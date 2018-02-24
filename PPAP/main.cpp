#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	constexpr  double econversion = 1.22;
	constexpr  double yconversion = 0.009;
	constexpr  double gconversion = 1.39;
	double value = 1;
	string type { " " };
	cout << "Please enter an ammount followed by its type (yen, pounds, euro):\n";
	cin >> value >> type;
	if (type == "yen") { cout << value << " yen = " << value * yconversion << " dollars\n"; }
	else if (type == "pounds") { cout << value << " pounds = " << value * gconversion << " dollars\n"; }
	else if (type == "euro") { cout << value << " euro = " << value * econversion << " dollars\n"; }
	else { cout << "I don't know that currency\n"; }
	keep_window_open();
}