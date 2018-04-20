#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// Read five names into a vector<string> name, then prompt the user for the ages of the people named and store the ages in a vector<double> age. Then print out the five (name[i], age[i]) pairs
// Sort the names (sort(name.begin(), name.end()) and print out the (name[i], age[i]) pairs. The tricky part is to get the age vector in the correct order to match the sorted name vector.
// Hint: Before sorting name, take a copy and use that to make a copy of age in the right order after sorting name. Then, do that exercise again but allowing an arbitrary number of names.

vector<string> name{ "John", "Tim", "Kenny", "Brandon", "Reginald" };
vector<double> age;

void print(vector<string>& n, vector<double>& a) {
	for (int i = 0; i < n.size(); ++i) {
		cout << "For " << n[i] << " the age is " << a[i] << "\n";
	}
}

int return_ind(vector<string>& vec, string& s) {
	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] == s) {
			return i;
		}
	}
}

void sort_names(vector<string>& n) {
	for (int i = 0; i < name.size(); ++i) {
		sort(name.begin(), name.end());
	}
}

int main()
{
	vector<string> orig_name = name;


	cout << "Enter the ages of the people:\n";
		for (int i = 0; i < name.size(); ++i) {
			double hold = 0;
			cout << "For " << name[i] << " the age is: \n";
			cin >> hold;
			age.push_back(hold);
		}

	vector<double> age_orig = age;

	print(name, age);
	sort_names(name);

	for (int i = 0; i < name.size(); ++i)
	{
		age[i] = age_orig[return_ind(orig_name, name[i])];
	}

	cout << "\nThe sorted names and ages are: \n";
	print(name, age);
	keep_window_open();
}