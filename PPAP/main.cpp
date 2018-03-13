#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int fib = 0;
int n = 0;
int power1 = 0;
int power2 = 0;
bool leave = false;

int main()
{
	while (!leave) {
		power1 = pow(((1 + sqrt(5)) / 2), n);
		power2 = pow(((1 - sqrt(5)) / 2), n);
		fib = (1 / sqrt(5))*(power1 - power2);

		if (fib < 0)
		{
			cout << "outside the range of int\n";
			leave = true;
		}
		else {
			cout << fib << "\n";			
		}
		n++;
	}
	cout << "n is: " << n << "\n";
	keep_window_open();
}
