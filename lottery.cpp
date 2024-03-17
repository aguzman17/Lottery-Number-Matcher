#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int winningNumber[5];
	int player[5];
	int num;
	int match = 0;

	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		winningNumber[i] = 0 + rand() % 9;
	}

	cout << "Please insert 5 numbers for your lottery picks: \n"
		<< "They must be in a range from 0 to 9. \n\n";


	for (int i = 0; i < 5; i++)
	{
		cout << "Number " << (i + 1) << ": ";
		cin >> num;

		while (num < 0 || num > 9)
		{
			cout << "ERROR \n"
				<< "Insert a valid number.\n";
			cin >> num;
		}
		player[i] = num;
	}


	for (int i = 0; i < 5; i++)
	{

		if (winningNumber[i] == player[i])
			match++;
	}


	cout << "Winning numbers: " << " ";


	for (int i = 0; i < 5; i++)
	{
		cout << winningNumber[i] << " ";
	}

	cout << endl;

	cout << "Your numbers:     ";


	for (int i = 0; i < 5; i++)
	{
		cout << player[i] << " ";
	}

	cout << endl;

	cout << "Amount of numbers matched: " << match << endl;

	return 0;
}
