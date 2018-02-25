#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	char letter = 'a';
	int number = 96;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		cout << letter << " " << ++number << "\t" << "\n";
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		cout << letter << " " << ++number << "\t" << "\n";
	}
	keep_window_open();
}