#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

vector<string> numbers;
void initialize_numbers()
{
	numbers.push_back("zero");
	numbers.push_back("one");
	numbers.push_back("two");
	numbers.push_back("three");
	numbers.push_back("four");
	numbers.push_back("five");
	numbers.push_back("six");
	numbers.push_back("seven");
	numbers.push_back("eight");
	numbers.push_back("nine");
}

int get_number()
{
	int number;
	string name;
	bool repeat = false;
	int result{ -1 };
	if (cin >> number)
	{
		return number;
	}
	cin.clear();
	cin >> name;
	for (size_t i = 0; i < numbers.size(); ++i) {
		if (numbers[i] == name) {
			result = i;
		}
	}
	if (result == -1) {
		cout << "The name <" << name << "> does not correspond to any single digit number.\n";
	}
	return result;
}


char operation = ' ';

int main()
{

	initialize_numbers();
	cout << "Please enter a number from 0 to 9 two times" << "\n";
	cout << "Please write the operation (+, -, *, /)" << "\n";
	cout << "Please enter | to exit" << "\n";
	int val1 = get_number();
	int val2 = get_number();
	cin >> operation;

	if (operation == '+')
	{
		cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
	}
	else if (operation == '-')
	{
		cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
	}
	else if (operation == '*')
	{
		cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
	}
	else if (operation == '/')
	{
		cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
	}
	else
	{
		cout << "I don't know this operation" << "\n";
	}
	keep_window_open();
}







