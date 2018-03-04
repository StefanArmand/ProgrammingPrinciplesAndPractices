#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// calculate number of rice grains the inventor asked for (64 squares). What is the largest number of squares for exact number with int and aproximate with double

int main()
{
	double square = 64;
	double grains = 1;
	double totalsq = 0;

	for (auto i=0; i<=square; i++)
	{
		while (grains > 0) {
			grains *= 2;
			cout << grains << "\n";
			++totalsq;
		}
		cout << totalsq << "\n";
	}

	keep_window_open();
}