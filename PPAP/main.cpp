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

int find_name(string name, vector<string> names)
{
	int indx = -1;
	size_t i = 0;

	while ((indx == -1) && (i < names.size())) {
		if (names[i] == name) indx = i;
		++i;
	}

	return indx;
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

	int indx = 0;
	cout << "Type a name a get the score: ";
	while (cin >> name) {
		indx = find_name(name, names);
		if (indx == -1)
			cout << "Error: name not found\n";
		else
			cout << name << "'s score is " << scores[indx] << '\n';
		cout << "Type a name a get the score: ";
	}
	keep_window_open();
}