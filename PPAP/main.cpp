#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// day of the week and value. Collect all the values for each day in a vector. Write out the values of the seven day of the week vector. Print out the sums of the values in each vector. 

vector<int> wvalue;
vector<int> monday;
vector<int> tuesday;
vector<int> wednsday;
vector<int> thursday;
vector<int> friday;
vector<int> saturday;
vector<int> sunday;
int number = 0;
string day = " ";
bool over = false;


int main()
{	
	while (!over)
	{
		cout << "Please write a day of the week folowed by a value (write exit 1 to exit): \n";
		cin >> day >> number;
		if (day != "exit")
		{
			if (day == "Monday" || day == "monday" || day == "Mon")
			{
				monday.push_back(number);
			}
			else if (day == "Tuesday" || day == "tuesday" || day == "Tue")
			{
				tuesday.push_back(number);
			}
			else if (day == "Wednsday" || day == "wednsday" || day == "Wed")
			{
				wednsday.push_back(number);
			}
			else if (day == "Thursday" || day == "thursday" || day == "Thu")
			{
				thursday.push_back(number);
			}
			else if (day == "Friday" || day == "friday" || day == "Fri")
			{
				friday.push_back(number);
			}
			else if (day == "Saturday" || day == "saturday" || day == "Sat")
			{
				saturday.push_back(number);
			}
			else if (day == "Sunday" || day == "sunday" || day == "Sun")
			{
				sunday.push_back(number);
			}
			else
			{
				cout << "Unrecognized name!\n";
				wvalue.push_back(number);
			}
		}
		else
		{
			over = true;
		}
	}
	int msum = 0;
	int tsum = 0;
	int wsum = 0;
	int thsum = 0;
	int frsum = 0;
	int sasum = 0;
	int susum = 0;

	for (int i=0; i < monday.size(); ++i)
	{
		msum += monday[i];
	}
	cout << "The sum of the values from Monday is: " << msum <<"\n";
	for (int i=0; i < tuesday.size(); ++i)
	{
		tsum += tuesday[i];
	}
		cout << "The sum of the values from Tuesday is: " << tsum <<"\n";
	for (int i=0; i < wednsday.size(); ++i)
	{
		wsum += wednsday[i];		
	}
	cout << "The sum of the values from Wednsday is: " << wsum <<"\n";
	for (int i=0; i < thursday.size(); ++i)
	{
		thsum += thursday[i];	
	}
	cout << "The sum of the values from Thursday is: " << thsum <<"\n";
	for (int i=0; i < friday.size(); ++i)
	{
		frsum += friday[i];	
	}
	cout << "The sum of the values from Friday is: " << frsum <<"\n";
	for (int i=0; i < saturday.size(); ++i)
	{
		sasum += saturday[i];	
	}
	cout << "The sum of the values from Saturday is: " << sasum <<"\n";
	for (int i=0; i < sunday.size(); ++i)
	{
		susum += sunday[i];	
	}
	cout << "The sum of the values from Sunday is: " << susum <<"\n";
	for (int i=0; i < wvalue.size(); ++i)
	{
		cout << "The wrong values are: " << wvalue[i] <<"\n";
	}
	keep_window_open();
}