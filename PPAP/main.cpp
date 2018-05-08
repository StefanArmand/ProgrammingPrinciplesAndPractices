#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//Write a program that creates a file of data in the form of the temperature Reading type defined
//in §10.5.For testing, fill the file with at least 50 “temperature readings.” Call this program
//store_temps.cpp and the file it creates raw_temps.txt.

struct Reading {
	int hour;
	double temperature;
	Reading(int h, double t) : hour(h), temperature (t) {}
};

ostream& operator <<(ostream os, const Reading& r) {
	return os << r.hour << ' ' << r.temperature;
}

Reading add_value(const vector<Reading>& r, const string& name)
{
	ofstream ost(name.c_str());
	if (!ost) error("can't open output file ", name);
	for (int i = 0; i < r.size(); ++i) {
		ost << r[i] << endl;
	}
}

int main()
try
{
	vector<Reading> readings;

}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}