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

	while (cin >> distance && distance != 555)
	{
		if (smallest == 0 && greatest == 0)
		{
			smallest = distance;
			greatest = distance;
			distances.push_back(distance);
			cout << "The distance " << smallest << " km is the smallest so far\n";
			cout << "The distance " << greatest << " km is greatest so far\n";
		}
		else if (distance < smallest)
		{
			smallest = distance;
			distances.push_back(distance);
			cout << "The distance " << smallest << " km is the smallest so far\n";
			cout << "The distance " << greatest << " km is still greatest so far\n";
		}
		else if (distance > greatest)
		{
			greatest = distance;
			distances.push_back(distance);
			cout << "The distance " << smallest << " km is still the smallest so far\n";
			cout << "The distance " << greatest << " km is greatest so far\n";
		}
		else
		{
			distances.push_back(distance);
			cout << "The distance " << smallest << " km is still the smallest so far\n";
			cout << "The distance " << greatest << " km is still the greatest so far\n";
			double sum = 0;
			for (auto x : distances) sum += x;		
		}

		total += distance;
		cout << "The sum of the distances written so far is " << total << " km\n";
		//sort(distance);
		sort(distances.begin(), distances.end());
		double median{ 0 };
		if (distances.size() % 2 == 0) {
			median = (distances[(distances.size() - 1) / 2] + distances[distances.size() / 2])/2; }
		else {
			median = distances[distances.size() / 2]; }
		//
		cout << " Median distance: " << median << "\n";
		

	}
}