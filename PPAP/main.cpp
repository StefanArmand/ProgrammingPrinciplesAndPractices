#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//Write a function that given two vector<double>s price and weight computes a value(an "index") that is the sum of all price[i]*weight[i]
//Make sure to have weight.size() == price.size()

vector<double> weight{ 51, 24, 46, 22, 52};
vector<double> price{ 110, 300, 50, 251, 11};

int ind(int r = 0) {
	for (int i = 0; i < weight.size(); ++i) {
		r += weight[i] * price[i];
	}
	return r;
}

int main()
{
	ind();
	cout << "The result is: " << ind() << "\n";
	keep_window_open();
}