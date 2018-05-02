#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// design a Name_pairs class holding (name, age) pairs where name is a string and age is a double. Represent that as a vector<string> (called name) and a vector<double> (called age). 
// Provide an input operation read_names() that reads a series of names. Provide a read_ages() operation that prompts the user for an age for each name. 
// Provide a print() operation that prints out the (name[i], age[i]) pairs (one per line) in the order determined by the name vector. 
// Provide a sort() operation that sorts the name vector in alphabetical order and reorganizes the age vector to match. Implement all "operations" as member functions. 

struct Name_pairs{
public:
	void read_names();
	void read_ages();
	void print() const;
	void sort();
private:
	vector<double> age;
	vector<string> name;
};

void Name_pairs::read_names() {
	cout << "Write names, write NoName to exit\n";
	string s = "";
	while (cin>>s) {
		if (s!="NoName") {
			name.push_back(s);
		}
		else break;
	}
}

void Name_pairs::read_ages() {
	cout << "Write ages for each name\n";
	double a = 0.0;
	for (int i = 0; i < name.size(); ++i) {
		cout << "For " << name[i] << " the age is : \n";
		cin >> a;
		age.push_back(a);
	}
}

void Name_pairs::print() const {
	for (int i = 0; i < name.size(); ++i) {
		cout << "The name is " << name[i] << " and his/her age is " << age[i] << "\n";
	}
}

int return_ind(vector<string>& vec, string& s) {
	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] == s) {
			return i;
		}
	}
}

void sort_names(vector<string>& n) {
	for (int i = 0; i < n.size(); ++i) {
		sort(n.begin(), n.end());
	}
}


void Name_pairs::sort() {
	vector<string> orig_name = name;
	vector<double> age_orig = age;

	sort_names(name);
	for (int i = 0; i < name.size(); ++i)
	{
		age[i] = age_orig[return_ind(orig_name, name[i])];
	}
	cout << "\nThe sorted names and ages are: \n";
	for (int i = 0; i < name.size(); ++i) {
		cout << "For " << name[i] << " the age is " << age[i] << "\n";
	}

}


int main()
{
	Name_pairs pairs;
	pairs.read_names();
	pairs.read_ages();
	pairs.print();
	pairs.sort();
	keep_window_open();
}