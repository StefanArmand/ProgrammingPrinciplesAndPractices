#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//Write a program that produces the sum of all the numbers in a file of whitespace-separated integers.

void input_ints(vector<int>& v, string& name) {
	ifstream ist(name.c_str());
	if (!ist) error("can't open input file ", name);
	int n;
	while (ist >> n) { v.push_back(n); };
}

int sum_ints(vector<int>& v) {
	int sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}
	return sum;
}

int main()
try
{
	cout << "Please enter file name:\n";
	string iname;
	cin >> iname;
	vector<int> ints;
	input_ints(ints, iname);
	int sum = sum_ints(ints);
	cout << "The sum of integers in " << iname << " is " << sum << ".\n";

}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}