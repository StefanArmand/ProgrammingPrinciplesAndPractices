#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

// Rock, Paper, Scissors.  Switch statement, the machine should give random answers. A vector should be used as the next value. Let the user enter some values

char rps = ' ';
vector<char> ai;
int itteration = 0;
void inititialize_ai()
{
	ai.push_back('s');
	ai.push_back('r');
	ai.push_back('p');
	ai.push_back('p');
	ai.push_back('r');
	ai.push_back('s');
	ai.push_back('s');
	ai.push_back('s');
	ai.push_back('p');
	ai.push_back('r');
	ai.push_back('r');
	ai.push_back('s');
	ai.push_back('s');
	ai.push_back('r');
	ai.push_back('p');
}


int get_number()
{
	itteration += 1;
	int result = -1;
		if (ai[itteration] == 's')
		{
			result = 0;
		}
		else if (ai[itteration] == 'r')
		{
			result = 1;
		}
		else if (ai[itteration] == 'p')
		{
			result = 2;
		}
	return result;
}

bool over = false;
auto score_ai = 0;
auto score_p1 = 0;

int main()
{
	while (!over)
	{
		cout << "Please select between rock, paper and scissors (r, p or s) . Best of 5 wins." << "\n";
		cin >> rps;
		inititialize_ai();
		get_number();
		if (score_ai == 5 || score_p1 == 5)
		{
			over = true;
		}
		else {
			switch (rps) {
			case 'r':
			{
				if (get_number() == 0)
				{
					cout << " Rock beats scissors, you win!\n";
					score_p1 += 1;
				}
				else if (get_number() == 1) {
					cout << "Rocks and rock, its a draw!\n";
				}
				else {
					cout << "Paper beats rock, ai wins!\n";
					score_ai += 1;
				}
				break;
			}
			case 'p':
			{
				if (get_number() == 0)
				{
					cout << " Scissors beats paper, ai wins!\n";
					score_ai += 1;

				}
				else if (get_number() == 1) {
					cout << "Paper beats rock, you win!\n";
					score_p1 += 1;
				}
				else {
					cout << "Paper and paper, its a draw!\n";
				}
				break;
			}
			case 's':
			{
				if (get_number() == 0)
				{
					cout << " Scissors and scissors, its a draw!\n";

				}
				else if (get_number() == 1) {
					cout << "Rock beats scissors, ai wins!\n";
					score_ai += 1;
				}
				else {
					cout << "Scissors beats paper, you win!\n";
					score_p1 += 1;
				}
				break;
			}
			default:
				cout << "This is not an element for rock paper scissors" << "\n";
			}
		}
	}
	if (score_ai == 5)
	{
		cout << "AI wins! Final score was: AI " << score_ai << " and P1 " << score_p1 << "\n";
	}
	else
	{
		cout << "You win! Final score was: AI " << score_ai << " and P1 " << score_p1 << "\n";
	}
	keep_window_open();
}