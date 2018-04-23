#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int maxv(vector<int> v) {
	int temp = 0;
	int max = 0;
	for (int i = 0; i < v.size(); ++i) {
		temp = v[i];
		if (temp > max) {
			max = temp;
		}
	}
	return max;
}

int main()
{
	vector<int> v1{ 5, 21, 33, 1, 52 };
	cout << "The largest number is: " << maxv(v1) << "\n";
	keep_window_open();
}