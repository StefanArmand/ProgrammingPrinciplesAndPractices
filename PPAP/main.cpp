#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	int distance = 0;
	cout << "Write the distance in miles to be converted in km\n";
	cin >> distance;
	cout << "the distance in km is " << distance * 1.609 << "\n";
	keep_window_open();
}