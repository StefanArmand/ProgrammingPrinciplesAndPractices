#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	double pennies = 0;
	double dimes = 0;
	double quarters = 0;
	double hdollars = 0;
	double dollar = 0;
	double total = 0;
	cout << "How many pennies do you have?\n";
	cin >> pennies;
	cout << "How many dimes do you have?\n";
	cin >> dimes;
	cout << "How many quarters do you have?\n";
	cin >> quarters;
	cout << "How many half dollars do you have?\n";
	cin >> hdollars;
	cout << "How many dollars do you have?\n";
	cin >> dollar;
	if (pennies == 1) { cout << "You have " << pennies << " penny\n"; }
	else { cout << "You have " << pennies << " pennies\n"; }
	if (dimes == 1) { cout << "You have " << dimes << " dime\n"; }
	else { cout << "You have " << dimes << " dimes\n"; }
	if (quarters == 1) { cout << "You have " << quarters << " quarter\n";}
	else { cout << "You have " << quarters << " quarters\n"; }
	if (hdollars == 1) { cout << "You have " << hdollars << " half dollar\n"; }
	else { cout << "You have " << hdollars << " half dollars\n"; }
	if (dollar == 1) { cout << "You have " << dollar << " dollar\n"; }
	else { cout << "You have " << dollar << " dollar\n"; }

	total = (pennies + (dimes * 10) + (quarters * 25) + (hdollars * 50) + (dollar * 100)) / 100;
	cout << "The value of all your coins is " << total << " dollars \n";
	keep_window_open();
}