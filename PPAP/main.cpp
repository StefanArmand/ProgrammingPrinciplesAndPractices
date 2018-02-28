#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	vector <double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);
	double sum = 0;
	for (int x : temps) sum += x;
	
	//sort(temps);
	sort(temps.begin(), temps.end());
	double median{ 0 };
	if (temps.size() % 2 == 0)
		median = temps[(temps.size() -1) / 2] + temps[temps.size() / 2];
	else
		median= temps[temps.size() / 2];
	//keep_window_open();
	cout << " Median temperature: " << median << "\n";
	return 0;
}