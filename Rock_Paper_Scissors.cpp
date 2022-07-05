// Rock Paper Scissors!.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include<iostream>
#include<ctime>

using namespace std;

void you_win()
{
	cout << "You win!" << endl;
}

void you_lose()
{
	cout << "You lose!" << endl;
}

void you_tie()
{
	cout << "It's a tie!" << endl;
}

int main()
{
	srand(time(NULL));

		
		cout << "1 - Rock" << endl;
		cout << "2 - Paper" << endl;
		cout << "3 - Scissors" << endl;
		cout << "Pick a move: ";

		int userChoice;
		cin >> userChoice;

		cout << endl;

		int cpuChoice = (rand() % 3) + 1;

		if (userChoice == 1)
		{
			cout << "You picked Rock." << endl;
		}
		else if (userChoice == 2)
		{
			cout << "You picked Paper." << endl;
		}
		else if (userChoice == 3)
		{
			cout << "You picked Scissors." << endl;
		}
		else
		{
			cout << "Invalid choice." << endl;
			return 1;
		}

		if (cpuChoice == 1)
		{
			cout << "Computer picked Rock." << endl;
		}
		else if (cpuChoice == 2)
		{
			cout << "Computer picked Paper." << endl;
		}
		else if (cpuChoice == 3)
		{
			cout << "Computer picked Scissors." << endl;
		}

		cout << endl;

		//Logic
		if (userChoice == cpuChoice)
		{
			you_tie();
		}

		if (userChoice == 1)
		{
			if (cpuChoice == 2)
			{
				you_lose();
			}
			else if (cpuChoice == 3)
			{
				you_win();
			}
		}
		else if (userChoice == 2)
		{
			if (cpuChoice == 1)
			{
				you_win();
			}
			else if (cpuChoice == 3)
			{
				you_lose();
			}
		}
		else if (userChoice == 3)
		{
			if (cpuChoice == 1)
			{
				you_lose();
			}
			else if (cpuChoice == 2)
			{
				you_win();
			}
		}
	cout << "Thanks for playing!" << endl;
}
