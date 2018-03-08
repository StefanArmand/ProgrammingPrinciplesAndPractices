#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// write a program to solve the quadratic equation, ax squared + bx + c =0

int main()
{
	auto a = 0;
	auto b = 0;
	auto c = 0;
	auto sq1 = 0;
	auto result1 = 0;
	auto result2 = 0;
	cout << "This program will solve the quadratic equation axsquared + bx + c = 0 \n" << "Please enter the value of a: \n";
	cin >> a;
	cout << "Please enter the value of b: \n";
	cin >> b;
	cout << "Please enter the value of c: \n";
	cin >> c;
	sq1 = (b*b) - (4 * a*c);
	result1 = (-b + sqrt(sq1)) / (2 * a);
	result2 = (-b - sqrt(sq1)) / (2 * a);

	cout << "The resut is: " << result1 << " and " << result2 << "\n";
	keep_window_open();
}