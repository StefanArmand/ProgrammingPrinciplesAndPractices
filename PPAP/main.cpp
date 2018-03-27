#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//Define a class Name_value that holds a string and a value. Rework this to use a vector<Name_value> instead of two vectors

class Name_value
{
public:
	string name = " ";
	int score = 0;
	Name_value(string str, int val)
        :name(str), score(val) { }
};


//vector<string> names;
//vector<int> scores;
//string name = " ";
//int score = 0;

//bool checkerror(string name, vector<string> names)
//{
//	bool retvalue = false;
//		
//	for (string x : names)
//	{
//		if (x == name) 
//		retvalue = true;
//	}
//
//	return retvalue;
//}
//
//int find_name(string name, vector<string> names)
//{
//	int indx = -1;
//	size_t i = 0;
//
//
//	while ((indx == -1) && (i < names.size())) {
//		if (names[i] == name) indx = i;
//		++i;
//	}
//
//	return indx;
//}
//
//int find_score(int score, vector<int> scores)
//{
//	int indx = -1;
//	size_t i = 0;
//
//	while ((indx == -1) && (i < scores.size())) {
//		if (scores[i] == score) indx = i;
//		++i;
//	}
//
//	return indx;
//}

int main()
{
	string name = " ";
	int score = -1;
	vector<Name_value> namescore;

	cout << "Please write a name folowed by a score. Write NoName 0 to exit.\n";
	while ( cin >> name >> score && !(name == "NoName" && score == 0))
	{
		namescore.push_back(Name_value(name,score));
	}
	for (int i = 0; i < namescore.size(); i++) {
		cout << namescore[i].name << " " << namescore[i].score << "\n";
	}


	//int indx = 0;
	//cout << "Type a name to get the score: ";
	//while (cin >> name){
	//	if (name != "done") {
	//		indx = find_name(name, names);
	//		if (indx == -1)
	//			cout << "Error: name not found\n";
	//		else
	//			cout << name << "'s score is " << scores[indx] << '\n';
	//		cout << "Type a name a get the score or done to exit: ";
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}

	//cout << "Type a score to get the name: ";
	//while (cin >> score) {
	//	if (score != 99) {
	//		indx = find_score(score, scores);
	//		if (indx == -1)
	//			cout << "Error: score not found\n";
	//		else
	//			cout << score << "'s name is " << names[indx] << '\n';
	//		cout << "Type a score a get the name or 99 to exit: ";
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}

	keep_window_open();
}