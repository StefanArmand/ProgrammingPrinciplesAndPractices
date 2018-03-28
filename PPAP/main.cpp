#include "std_lib_facilies.h"
#include <iostream>

using namespace std;

//one digit right in the right position, a bull, one digit right but in the wrong position, a cow
// rewrite to use four letters not numbers

vector<char> bullscows;
void initialize_game()
{
	bullscows.push_back('g');
	bullscows.push_back('f');
	bullscows.push_back('h');
	bullscows.push_back('k');
}

//void new_solution(){
//	initialize_game();
//	bullscows[0] = randint(10);
//	bullscows[1] = randint(10);
//	bullscows[2] = randint(10);
//	bullscows[3] = randint(10);
//}


int main()
{
	initialize_game();
	//new_solution();
	char guess0 = ' ';
	char guess1 = ' ';
	char guess2 = ' ';
	char guess3 = ' ';
	int seed;
	bool gover = false;
	//cout<< "Enter seed for random numbers: \n";
	//cin >> seed;
	//srand(seed);

	while (!gover) {
		int govercounter = 0;
		cout << "Please enter your guess (4 letters, each a to z followed by an enter):\n";
		cin >> guess0 >> guess1 >> guess2 >> guess3;
		if (guess0 == bullscows[0])
		{
			cout << "First letter "<< guess0 <<" is a bull\n";
			++govercounter;
		}
		else if (guess0 == bullscows[1] || guess0 == bullscows[2] || guess0 == bullscows[3])
		{
			cout << "First letter "<< guess0 <<" is a cow\n";
		}

		if (guess1 == bullscows[1])
		{
			cout << "Second letter "<< guess1 <<" is a bull\n";
			++govercounter;
		}
		else if (guess1 == bullscows[0] || guess1 == bullscows[2] || guess1 == bullscows[3])
		{
			cout << "Second letter "<< guess1 <<" is a cow\n";
		}

		if (guess2 == bullscows[2])
		{
			cout << "Third letter "<< guess2 <<" is a bull\n";
			++govercounter;
		}
		else if (guess2 == bullscows[1] || guess2 == bullscows[0] || guess2 == bullscows[3])
		{
			cout << "Third letter "<< guess2 <<" is a cow\n";
		}

		if (guess3 == bullscows[3])
		{
			cout << "Fourth letter "<< guess3 <<" is a bull\n";
			++govercounter;
		}
		else if (guess3 == bullscows[1] || guess3 == bullscows[2] || guess3 == bullscows[0])
		{
			cout << "Fourth letter "<< guess3 <<" is a cow\n";
		}

		if (govercounter==4)
		{
			cout << "Game over! You won!\n";
			gover = true;
		}

	}
	keep_window_open();
}