#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	vector <double> temps;
	for (double temp; cin >> temp;) {
		if (temp != 55) {
			temps.push_back(temp);
		}
		else {
			double sum = 0;
			for (auto x : temps) sum += x;

			//sort(temps);
			sort(temps.begin(), temps.end());
			double median{ 0 };
			if (temps.size() % 2 == 0)
				median = temps[(temps.size() - 1) / 2] + temps[temps.size() / 2];
			else
				median = temps[temps.size() / 2];
			//
			cout << " Median temperature: " << median << "\n";
		}
	}
	
	keep_window_open();
	return 0;
}