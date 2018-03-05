#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// find all prime numbers between 1 and 100. One way is a function to check if a number is prime, using a vector of primes in order. Then write a loop from 1 to 100 to check if
// each number is a prime, and stores each prime in a vector. Write another loop that lists the primes found. 2 first prime.

vector<int> primes;

int main()
{
	primes.push_back(2);
	primes.push_back(3);
	primes.push_back(5);
	primes.push_back(7);
	for (auto i = 2; i<100; ++i)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
		{
			primes.push_back(i);
		}
	}
	//ifprime();
	for (auto i = 0; i < primes.size(); ++i) {
		cout << primes[i] << '\n';
	}
	keep_window_open();
}