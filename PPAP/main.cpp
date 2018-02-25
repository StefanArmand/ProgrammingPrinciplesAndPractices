#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	char letter = 'a';
	int number = 96;
	while (letter <= 'z')
	{
		cout << letter << " " << ++number << "\t" << "\n";
		++letter;
	}
	keep_window_open();
}