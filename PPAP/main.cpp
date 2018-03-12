#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//Convert Celsius to Fahrenheit and back

double ctof(double c)
{
	double f = (c*1.8) + 32;
	if (f<-460)
	{
		cout << "The temperature is too low\n";
	}
	else
	{
		return f;
	}
}
double ftoc(double f)
{
	double c = (f - 32) / 1.8;
	if (c < -273)
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
	cout << "Please enter the unit, Celsius or Fahrenheit (c or f)\n";
	char unit = ' ';
	cin >> unit;
	if (unit == 'c')
	{
		double f = ctof(d);
		cout << "The temperature in Fahrenheit is " << f << "\n";
	}
	else if (unit == 'f')
	{
		double c = ftoc(d);
		cout << "The temperature in Celsius is " << c << "\n";
	}
	else
	{
		cout << "The temperature is unknown\n";
	}

	keep_window_open();
}