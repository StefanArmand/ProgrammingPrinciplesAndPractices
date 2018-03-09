#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//vectors with names and values, one named names the other scores. Terminate with NoName 0. Each name has to be unique, error if it isn't. Write out all one per line

vector<string> names;
vector<int> scores;
string name = " ";
int score = 0;

bool checkerror(string name, vector<string> names)
{
	bool retvalue = false;
		
	for (string x : names)
	{
		if (x == name) 
		retvalue = true;
	}

	return retvalue;
}

int main()
{
	cout << "Please write a name folowed by a score. Write NoName 0 to exit.\n";
	while ( cin >> name >> score)
	{
		if (name != "NoName" && score != 0) {
			names.push_back(name);
			scores.push_back(score);
		}
		else
		{
			break;
		}
	}
	if (checkerror(name, names)) {
		cout << "Names repeat, error! \n";
	}
	else
	{
		for (int i = 0; i < names.size(); i++) {
			cout << names[i] << " " << scores[i] << "\n";
		}

	}
	keep_window_open();
}