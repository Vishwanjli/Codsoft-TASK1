//C++ program for NUMBER GUESSING GAME

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num, guess, tri= 0;
	
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Number Guessing Game";
	do
	{
		cout << "\n\n Enter your guess number between 1 and 100 : ";
		cin >> guess;
		tri++;

		if (guess > num)
			cout << "\n Guess is too high!";
		else if (guess < num)
			cout << "\n Guess is too low!";
		else
			cout << "\n Correct! You got it in " << tri<< " guesses!\n";
	} while (guess != num);
	return 0;
}
