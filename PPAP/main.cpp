#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// write two functions that reverse the order of elements in a vector <int>. The first function should produce a new vector with reversed sequence, leaving the first unchanged. 1, 3, 5, 7, 9 becomes 9, 7, 5, 3, 1
// the other reverse function should reverse the elements of its vector using any other vector

void print(const string& label, const vector<int>& v)
{
	cout << label << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}

void printstring(const string& label, const vector<string>& v)
{
	cout << label << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}


vector<int> firstreverse(vector<int>& v)
{
	vector<int> v_res(v.size());
	for (int i = 0; i < v.size(); ++i) {
		v_res[i] = v[v.size() - 1 - i];		
	}
	return v_res;
}

void secondreverse(vector<int>& v)
{
	for (int i = 0; i < v.size() / 2; ++i) {
		swap(v[i], v[v.size() - 1 - i]);
	}
}

vector<string> thirdreverse(vector<string>& v)
{
	vector<string> v_res(v.size());
	for (int i = 0; i < v.size(); ++i) {
		v_res[i] = v[v.size() - 1 - i];
	}
	return v_res;
}

void fourthreverse(vector<string>& v)
{
	for (int i = 0; i < v.size() / 2; ++i) {
		swap(v[i], v[v.size() - 1 - i]);
	}
}

int main()
{
	string label = "Here are the reversed numbers: \n";
	//int number = 0;
	vector<int> v {4, 7, 5, 3};
	firstreverse(v);
	print(label, v);
	secondreverse(v);
	print(label, v);
	vector<string> v1{ "one", "two", "three", "four" };
	thirdreverse(v1);
	printstring(label, v1);
	fourthreverse(v1);
	printstring(label, v1);
	keep_window_open();
}
