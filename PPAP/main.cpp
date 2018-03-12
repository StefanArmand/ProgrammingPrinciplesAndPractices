#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//Convert Celsius to Kelvin and back

double ctok(double c)
{
	double k = c + 273.15;
	if (k<0)
	{
		cout << "The temperature is too low\n";
	}
	else
	{
		return k;
	}
}
double ctoc(double k)
{
	double c = k - 273.15;
	if (c < -273.15)
	{
		cout << "The temperature is too low\n";
	}
	else
	{
		return c;
	}
}

int main()
{
	double d = 0;
	cout << "Please enter a temperature:\n";
	cin >> d;
	cout << "Please enter the unit, Celsius or Kelvin (c or k)\n";
	char unit = ' ';
	cin >> unit;
	if (unit == 'c')
	{
		double k = ctok(d);
		cout << "The temperature in Kelvin is " << k << "\n";
	}
	else if (unit == 'k')
	{
		double c = ctoc(d);
		cout << "The temperature in Celsius is " << c << "\n";
	}
	else
	{
		cout << "The temperature is unknown\n";
	}

	keep_window_open();
}