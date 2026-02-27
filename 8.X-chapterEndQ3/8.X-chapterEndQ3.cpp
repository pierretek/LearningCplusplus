//Simple game to practice using the random.h header

#include <iostream>
#include "Random.h"
#define MAX_TRIES 7

int main() {

startGame: //Label to start the game (bad practice, this causes spagetti code)

	//initializing the required game variables
	int guess{};
	int tries{0};
	char gameChoice{};
	int number = Random::get(1, 100);

	std::cout << "\t- GUESSING GAME -" << '\n';
	std::cout << "Try to Guess a Number from 1-100!" << '\n';

	//Do while loop to play the main game
	do {
		tries++;

		std::cout << "\nYour Guess > ";
		std::cin >> guess;

		//Checking the Users Guess
		if (guess > number) {
			std::cout << "TOO HIGH! Try a Lower Number!" <<
				"\nYou have " <<
				(MAX_TRIES - tries > 0 ? std::to_string(MAX_TRIES - tries) : "NO") << " Tries Left\n";

		} else if (guess < number) {

			std::cout << "TOO LOW! Try a Higher Number!" <<
				"\nYou have " <<
				(MAX_TRIES - tries > 0 ? std::to_string(MAX_TRIES - tries) : "NO") << " Tries Left\n";
		} else {

			std::cout << "CORRECT! Congrats you Won the Game!" <<
				"\nOnly Took you " << tries << " Tries!\n";
		}

	} while (guess != number && tries < MAX_TRIES);

	//If the user ran out of tries
	if (guess != number) {
		std::cout << "\nUH OH! You Lost the Game, Better Luck next Time!" <<
			"\nThe Number was:  " << number << '\n';
	}

	//Do While loop to ask if the user wants to play again
	do {
		std::cout << "\nWant to Play Again? (y/n)" << '\n';
		std::cout << "Your Choice > ";
		std::cin >> gameChoice;

		switch (gameChoice) {
			case 'y':
				std::cout << "\nAlright Let the Games Commence!\n" << '\n';
				goto startGame;
				break;
			case 'n':
				std::cout << "\nOk thanks for Playing Cya later!" << '\n';
				break;
			default:
				std::cout << "\nInvalid Choice: Try again" << '\n';
				break;
		}
	} while (gameChoice != 'y' && gameChoice != 'n');


}


//https://www.learncpp.com/cpp-tutorial/chapter-8-summary-and-quiz/
