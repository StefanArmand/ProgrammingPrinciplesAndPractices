#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the name of the person you want to write to: \n";
	string first_name;
	string friend_name;
	char friend_sex{ 0 };
	int age{ 0 };
	cin >> first_name;
	cout << "Enter the name of his friend: \n";
	cin >> friend_name;
	cout << "Enter the gender of his friend as m or f: \n";
	cin >> friend_sex;
	cout << "Enter the age of your friend: \n";
	cin >> age;
	cout << "Dear " << first_name << "!\n";
	cout << "How are you? I am fine. I miss you. \n";
	cout << "Have you seen " << friend_name << " lately?\n";
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me \n";
	}
	if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me \n";
	}
	
	if (age < 0 || age > 110) { simple_error("you're kidding!"); }
	cout << "I hear you just had a birthday and you are " << age << "!\n";
	if (age < 12){ cout << "Next year you will be " << age+1 <<" \n"; }
	if (age == 17) { cout << "Next year you will be able to vote \n"; }
	if (age > 70) { cout << "I hope you are enjoying retirement \n"; }
	cout << "Yours sincerely \n\n\nStefan \n";
	keep_window_open();
}