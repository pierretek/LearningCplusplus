//solving problem 5 from chapter 16 (hangman game)
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "Random.h"

//namespace that gives a random word from the list
namespace WordList {

	const std::vector words{"mystery", "broccoli","account",
		"almost","spaghetti","opinion","beautiful","distance","luggage","cornball","president",
	"industry","shareholders","calculator","programming","carrot","maybe"};

	std::string_view chooseWord() {

		return words[static_cast<std::size_t>(Random::get(0, words.size() - 1))];
	}

}

//helper function to tell whether a char is a valid letter
bool isValidLetter(char c) {

	c = static_cast<char>(std::tolower(c));

	//this looks really stupid lmao
	switch (c) {

		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			return true;
		default:
			return false;
	}

}

//helper function to determine if an element is in a vector
template <typename T>
bool containsInVector(std::vector<T> vec, T element) {

	for (const auto& v : vec) {
		if (element == v) return true;
	}

	return false;

}

//The entire game lives in this class
class GameSession {
	private:
	std::string word{};
	std::vector<char> guesses{};
	std::vector<char> correctLetters{};
	int numGuesses{};
	bool hasWon{false};

	void initalizeCorrectLetters() {

		for (const char& letter : word) {
			correctLetters.push_back(letter);
		}
	}

	void printGameState() const {
		std::cout << "\nThe word: ";

		for (const auto& letter : correctLetters) {
			std::cout << (containsInVector(guesses, letter) ? letter : '_');
		}

		std::cout << "\nNumber of guesses left: ";
		for (int i{0}; i < numGuesses; i++) {
			std::cout << "+ ";
		}

		std::cout << '\n';
	}

	void getUserInput() {

		char letter{};

		do {

			std::cout << "Enter your next letter: ";
			std::cin >> letter;

			//only taking 1 letter at a time
			std::cin.clear();
			std::cin.ignore(1e10, '\n');

			// if the user entered an invalid character or previously guessed character
			if (!isValidLetter(letter))	std::cout << "Invalid character, try again...\n";

			if (containsInVector(guesses, letter))
				std::cout << "You already guessed '" << letter << "', please try again...\n";

		} while (!isValidLetter(letter) || containsInVector(guesses, letter));

		std::cout << "You guessed: " << letter << '\n';
		numGuesses--;

		guesses.push_back(letter);

	}

	bool checkIfWon(){

		bool winFlag{true};
		
		for (const auto& letter : correctLetters) {

			if (!containsInVector(guesses, letter)) winFlag = false;
		}

		return winFlag;
	}

	void playGame() {

		std::cout << "\tWelcome to Hangman in C++!\n";
		std::cout << "Guess the random word letter by letter\n";
		std::cout << "Dont run out of guesses, good luck!\n";

		while (!checkIfWon() && numGuesses > 0 ) {

			printGameState();
			getUserInput();

			if (checkIfWon()) {
				std::cout << "\nCONGRATS! You won the game!\n";
				std::cout << "The word was: \"" << word << "\"!\n";
				
			} else if (!numGuesses) {
				std::cout << "\nRIP! You lost the game\n";
				std::cout << "The word was: \"" << word << "\"\n";
			}

		}
	}

	public:
	GameSession():
		word{WordList::chooseWord()},
		numGuesses{static_cast<int>(word.size() * 1.5)} {
		
		initalizeCorrectLetters();
		playGame(); //automatically play the game when object created
	} 


};
int main() {

	GameSession game{};

	return 0;
}
