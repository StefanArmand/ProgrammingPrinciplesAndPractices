#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// write a function that finds the smalles and largest element of a vector argument and also computes the mean and median. Do not use global variables. 
// Either return a struct containing the results or pass them back through reference arguments.

struct Results {
	double max{ 0 };
	double min{ 0 };
	double mean{ 0 };
	double median{ 0 };
};

void print_results(Results results) {
	cout << "The results are: \n";
	cout << "Min: "<< results.min << "\n";
	cout << "Max: "<< results.max << "\n";
	cout << "Mean: "<< results.mean << "\n";
	cout << "Median: "<< results.median << "\n";
}

Results maxv(vector<double>& v) {
	double temp = 0;
	double tmean = 0;
	Results results;
	for (int i = 0; i < v.size(); ++i) {
		temp = v[i];
		if (temp > results.max) {
			results.max = temp;
		}
		if (temp < results.min) {
			results.min = temp;
		}
		tmean += v[i];
	}
	results.mean = tmean / 2;
	sort(v.begin(), v.end());
	results.median = v[v.size() / 2];

	return results;
}

int main()
try{
	vector<double> v1{ 5, 21, 33, 1, 52 };
	maxv(v1);
	Results results = maxv(v1);
	//cout << "The largest number is: " << print_results(maxv) << "\n";
	cout << "Min: " << results.min << "\n";
	cout << "Max: " << results.max << "\n";
	cout << "Mean: " << results.mean << "\n";
	cout << "Median: " << results.median << "\n";
	keep_window_open();
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}
