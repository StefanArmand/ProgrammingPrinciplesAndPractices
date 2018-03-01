#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	int first = 1;
	int last = 100;
	int guess = 50;
	char answer = ' ';
	int question = 0;
	cout << "Please think of a number between 1 and 100.\n";

	while (first != last) {
		guess = (first+last) / 2;
		if (question % 2 == 0) {
			cout << "Is you number less than " << guess << " (y, n) ? \n";
			cin >> answer;
			if (answer == 'y') {
				++question;
				last = guess - 1;
			}
			else if (answer == 'n')
			{
				++question;
				first = guess;
			}
			else {
				cout << "Sorry, I don't understand your answer. Again\n";
			}
		}
		else
		{
			cout << "Is your number more than " << guess << " (y, n) ? \n";
			cin >> answer;
			if (answer == 'y') {
				++question;
				first = guess + 1;
			}
			else if (answer == 'n')
			{
				++question;
				last = guess;
			}
			else {
				cout << "Sorry, I don't understand your answer. Again\n";
			}
		}
	}
	cout << "The number you were thinking of is " << first << '\n';
	keep_window_open();
}