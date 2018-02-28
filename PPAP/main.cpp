#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	double value = 0;
	double lowest = 0;
	double highest = 0;
	string unit = " ";
	double sum = 0;
	vector <double> list;
	

	cout << "Please enter a number with a unit type (cm, m, in, ft): ";
	while (cin >> value >> unit)
	{
		if (unit == "m") { value = value * 100; }
		else if (unit == "in") { value = value * 2.5; }
		else if (unit == "ft") { value = value * 12 * 2.5; }
		else if (unit == "cm") { value = value; }
		else { cout << "Unknown unit\n" << endl; }
		if (lowest == 0 && highest ==0 )
		{
			lowest = value;
			highest = value;
			list.push_back(value * 100);
			cout << "The value " << lowest << " cm is the smallest so far\n";
			cout << "The value " << highest << " cm is highest so far\n";
		}
		else if (value < lowest)
		{
			lowest = value;
			list.push_back(value * 100);
			cout << "The value " << lowest << " cm is the smallest so far\n";
			cout << "The value " << highest << " cm is still highest so far\n";
		}
		else if (value > highest)
		{
			highest = value;
			list.push_back(value * 100);
			cout << "The value " << lowest << " cm is still the smallest so far\n";
			cout << "The value " << highest << " cm is highest so far\n";
		}
		else
		{
			list.push_back(value * 100);
			cout << "The value " << lowest << " cm is still the smallest so far\n";
			cout << "The value " << highest << " cm is still the highest so far\n";
		}
		
		sum += value;
		cout << "The sum of the values written so far is " << sum/100 << " m\n";		
	}
	sort(list.begin(), list.end());
	for (int i = 0; i<list.size(); ++i)
	cout << list[i] << " m\n";
	keep_window_open();
}