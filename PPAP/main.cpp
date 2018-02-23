#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	string val1 = " ";
	string val2 = " ";
	string val3 = " ";

	cout << "Please add the 3 values to be ordered \n";
	cout << "Please add the first value \n";
	cin >> val1;
	cout << "Please add the second value \n";
	cin >> val2;
	cout << "Please add the third value \n";
	cin >> val3;

	string min{" "};
	string  mid{ " " };
	string last{ " " };
	if (val1 < val2)
		if (val1 < val3) {
			min = val1;
			if (val2 < val3) { mid = val2; last = val3; }
			else { mid = val3; last = val2; }
		}
		else
		{
			min = val3; mid = val1; last = val2;
		}
	else
		if (val2 < val3)
			if (val2 < val1) {
				min = val2;
				if (val1 < val3) { mid = val1; last = val3; }
				else { mid = val3; last = val1; }
			}
			else
			{
				min = val3; mid = val2; last = val1;
			}
	cout << min << " " << mid << " " << last << "\n";
	keep_window_open();
}