#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// Make a vector that holds ten string values. Use in a program that converts a digit to its corresponding spelled out value. 7 = seven. 
// same program should converts spelled out numbers into digit form. seven = 7

//vector<string> names { "zero", "one", "two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
vector<string> numbers;
	void initialize_numbers() {
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

int get_number(string name)
{
	int result{ -1 };
	for (size_t i = 0; i < numbers.size(); ++i) {
		if (numbers[i] == name) {
			result = i;
		}
	}
	return result;
}

int number = 0;
string name = " ";
bool quit{ false };

int main()
{

	initialize_numbers();
	while (!quit) {

		cout << "Please enter a number from 0 to 9" << "\n";
		cout << "Please enter a number name from zero to nine" << "\n";
		cout << "Please enter | to exit" << "\n";

		if (cin >> number) {
			cout << numbers[number] << "\n";
		}
		else
		{
			cin.clear();
			cin >> name;
			if (name == "|") {
				quit = true;
			}
			else {
				cout << get_number(name) << "\n";
			}
		}
	}
}
