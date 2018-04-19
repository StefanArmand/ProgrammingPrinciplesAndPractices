#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// a print function that prints a vector of ints and cout. Two arguments: a string for "labeling" the output and a vector
// create a vector of fibonacci numbers and print them using the function. To create the vector write the function, fibonacci (x, y, v, n), where x and y are ints, v is an empty vector<int>
// and n is the number of elements to put into v; v[0] will be x and v[y]. Fibonacii numbers are part of a sequence where each element is the sum of the two previous ones. 
// For example, starting with 1 and 2, we get 1, 2, 3, 5, 8, 13, 21... Our function should make such a sequence starting with its x and y aguments


void print(const string& label, const vector<int>& v)
{
	cout << label << "\n";
	cout << "1 \n2 \n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}

void fibonacci(int x, int y, vector<int>& v, int n)
{
	int next_num = 1;
	for (int i = 0; i < n; i++)
	{
		next_num = x + y;
		v.push_back(next_num);
		x = y;
		y = next_num;
	}
}

int main() 
try
{
	
	int x = 1;
	int y = 2;
	vector<int> v;
	int n = 43;
	fibonacci(x, y, v, n);

	string label = "Your Fibonacci sequence: \n";
	print(label, v);
	keep_window_open();
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}
