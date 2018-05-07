#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// start a program to work with points. Begin by defining the data type Point that has two coordinate members x and y.

struct Point {
	int x;
	int y;
	Point() : x(0), y(0) {}
	Point(int xx, int yy) : x(xx), y(yy) {}
};

bool operator==(const Point& p1, const Point& p2)
{
	return p1.x == p2.x && p1.y == p2.y;
}

bool operator!=(const Point& p1, const Point& p2)
{
	return !(p1 == p2);
}

void print_vector(vector<Point>& points) {
	for (int i = 0; i < points.size(); ++i) {
		cout << points[i] << endl;
	}
}

////ostream& operator<<(ostream& os, const Point& p)
////{
////	return os << '(' << p.x << ',' << p.y << ')';
////}

istream& operator >> (istream& is, Point& p) {
	int x, y;
	char ch1, ch2, ch3;
	is >> ch1 >> x >> ch2 >> y >> ch3;
	if (!is) return is;
	if (ch1 != '(' || ch2 != ',' || ch3 != ')') {
		is.clear(ios_base::failbit);
		return is;
	}
	p = Point(x, y);
	return is;
}

void write_to_file(const vector<Point>& points, const string& name)
{
	ofstream ost(name.c_str());
	if (!ost) error("can't open output file ", name);
	for (int i = 0; i<points.size(); ++i)
		ost << points[i] << endl;
}

void fill_from_file(vector<Point>& points, const string& name)
{
	ifstream ist(name.c_str());
	if (!ist) error("can't open input file, ", name);
	Point pp;
	while (ist >> pp) points.push_back(pp);
}

void compare_vectors(const vector<Point>& points1, const vector<Point>& points2)
{
	if (points1.size() != points2.size())
		error("Something's wrong!");
	for (int i = 0; i<points1.size(); ++i) {
		if (points1[i] != points2[i])
			error("Something's wrong!");
	}
}

int main()
{
	/*cout << "Please enter input file name:";
	string iname;
	cin >> iname;
	ifstream ist{ iname };
	if (!ist) error("can't open input file", iname);*/

	vector <Point> original_points;
	cout << "Please enter 7 (x,y) pairs: \n";
	for (int i = 0; i < 7; ++i) {
		Point p;
		cin >> p;
		original_points.push_back(p);
	}

	print_vector(original_points);

	//cout << "Please enter name of output file: ";
	//string oname;
	//cin >> oname;
	//ofstream ost{ oname }; // ost is an output stream for a file named oname
	//if (!ost) error("can't open output file", oname);
	//for (int p : points)
	//	ost << '(' << p.x << ',' << p.y << ")\n";
}