#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

vector <double> numbers;
double number = 0;
double sum = 0;
vector <double> diff;
double difference = 0;

int main()
{
	double numval = 0;
	cout << "Please enter the number of values you want to sum\n";
	cin >> numval;
	cout << "Please enter some integers (Press '|' to stop)\n";
	for (int i = 0; i < numval; ++i) {
		cin >> number;
		if (number != '|') {
			numbers.push_back(number);
		}
		else
		{
			break;
		}
	}
	for (int j = 0; j < numbers.size(); ++j)
	{
		sum += numbers[j];
	}
	cout << "The sum of the numbers is: " << sum << "\n";
	
	for (int l = numval; l > numbers[0]; l--)
	{
		difference = numbers[l] - numbers[l-1];
		diff.push_back(difference);	
	}
	for (int k = 0; k < diff.size(); ++k) {
		cout << "The difference of the numbers is: " << diff[k] << "\n";
	}
	keep_window_open();
}