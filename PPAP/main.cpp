#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int value = 0;

int square (int x)
{
	int s{ 0 };
	for (auto i = 0; i < x; i++) { s += x; }
	return s;
}

int main()
{
	cout << square(5) << "\n";
	keep_window_open();
}