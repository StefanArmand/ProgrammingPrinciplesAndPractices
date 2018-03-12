#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

auto a = 3;
auto b = 2;
auto c = 5;
auto r = 0;

int insidesqr(int r)
{

	r = b * b - 4 * a*c;
	if (r<0)
	{
		cout << "sqrt is invalid\n";
		return 1;
	}
	return r;
}

int main()
{	
	double res1 = 0;
	double res2 = 0;

	res1 = (-b + sqrt(insidesqr(r))) / (2 * a);
	res2 = (-b - sqrt(insidesqr(r))) / (2 * a);

	cout << "Result 1 is " << res1<< "\n";
	cout << "Result 2 is " << res2 << "\n";
	keep_window_open();
}