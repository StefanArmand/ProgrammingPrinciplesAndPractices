#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// write a function that takes a vector<string> argument and returns a vector<int> containing the number of characters in each string.
// Also find the longest and the shortest string and the lexicographically first and last string.

void print(vector<int> v) {
	cout << "The number of chars in each string are:\n";
	for (int i = 0; i < v.size(); ++i) {
		cout << "string " << i + 1 << ": " << v[i] << "\n";
	}
}

vector<int> numchar(vector<string> v) {
	vector<int> numbchar;
	for (int i = 0; i < v.size(); ++i) {
		numbchar.push_back(v[i].size());
	}
	return numbchar;
}

string longest(vector<string> v) {
	string ls;
	int maxl = 0;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i].size() > maxl) {
			maxl = v[i].size();
			ls = v[i];
		}
	}
	return ls;
}

string shortest(vector<string> v) {
	string ls;
	int minl = 10;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i].size() < minl) {
			minl = v[i].size();
			ls = v[i];
		}
	}
	return ls;
}

int main() 
try
{
	vector<string> names{ "string", "george", "dedeman", "randomone", "laser" };
	vector<int> number = numchar(names);
	print(number);
	cout << "Longest string is : " << longest(names) << "\n";
	cout << "Shortest string is : " << shortest(names) << "\n";
	keep_window_open();
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}
