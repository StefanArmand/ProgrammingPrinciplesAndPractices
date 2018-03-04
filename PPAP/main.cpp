#include "std_lib_facilies.h"
#include <iostream>

using namespace std;


// 1 grain for first square, 2 for the second, 4 for third doubling until 64 squares. 
// How many squares for 1000 grains, or 1000000, 1000000000
// we need a loop, an int to keep track of the square, an int to keep track of number of grains on the current square
// an int to keep track of of the grains on all squares. Write out all variables for each iteration



int main()
{
	int square = 0;
	int grains = 1000;
	int total = 0;

	while (grains > 1) {
		int val1 = grains;
		grains = (grains + 1) / 2;
		cout << grains << "\n";
		int val2 = grains;
		total += val1 + val2;
		++square;
	}

	cout << "Number of squares for 1000 grains is " << square <<" and the total is " << total << " \n";
	keep_window_open();
}