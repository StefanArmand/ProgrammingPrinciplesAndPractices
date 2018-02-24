#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	constexpr  double econversion = 1.22;
	constexpr  double yconversion = 0.009;
	constexpr  double gconversion = 1.39;
	constexpr  double yuconversion = 0.19;
	constexpr  double kconversion = 0.17;
	double value = 1;
	char type{ ' ' };
	cout << "Please enter an ammount followed by its type (yen - y, pounds - p, euro - e, yuan - u, kroner - k):\n";
	cin >> value >> type;
	switch (type) {
	case 'y': cout << value << " yen = " << value * yconversion << " dollars\n"; break;
	case 'p': cout << value << " pounds = " << value * gconversion << " dollars\n"; break;
	case 'e': cout << value << " euro = " << value * econversion << " dollars\n"; break;
	case 'u': cout << value << " yuan = " << value * yuconversion << " dollars\n"; break;
	case 'k': cout << value << " kroner = " << value * kconversion << " dollars\n"; break;
	default : cout << "I don't know that currency\n";
	}	
	keep_window_open();
}