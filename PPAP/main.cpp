#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	vector <double> distances;
	double distance = 0;
	double total = 0;
	double smallest = 0;
	double greatest = 0;
	double mean = 0;

	while (cin >> distance)
	{
		if (smallest == 0 && greatest == 0)
		{
			smallest = distance;
			greatest = distance;
			distances.push_back(distance * 100);
			cout << "The distance " << smallest << " m is the smallest so far\n";
			cout << "The distance " << greatest << " m is greatest so far\n";
		}
		else if (distance < smallest)
		{
			smallest = distance;
			distances.push_back(distance * 100);
			cout << "The distance " << smallest << " m is the smallest so far\n";
			cout << "The distance " << greatest << " m is still greatest so far\n";
		}
		else if (distance > greatest)
		{
			greatest = distance;
			distances.push_back(distance * 100);
			cout << "The distance " << smallest << " m is still the smallest so far\n";
			cout << "The distance " << greatest << " m is greatest so far\n";
		}
		else
		{
			distances.push_back(distance * 100);
			cout << "The distance " << smallest << " m is still the smallest so far\n";
			cout << "The distance " << greatest << " m is still the greatest so far\n";
		}

		total += distance;
		cout << "The sum of the distances written so far is " << total << " m\n";
	}
}