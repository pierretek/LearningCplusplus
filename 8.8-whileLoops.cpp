//Simple exeersize to practise using while loops

#include <iostream>


void Q2CharacterPrinting();
void Q3InvertedPrinting();
void Q4FlippedPrinting();

int main() {
	// Q2CharacterPrinting();

	// Q3InvertedPrinting();

	Q4FlippedPrinting();

	return 0;
}

//Simple loop that prints all characters from a-z
void Q2CharacterPrinting() {
	char letter{'a'};

	while (letter < 'z') {
		std::cout << "Letter: " << ++letter << ", ASCII: " << (int)letter << '\n';
	}
}


//Prints a triangle of numbers
void Q3InvertedPrinting() {

	int outer{5};
	while (outer >= 1) {

		int inner{outer};

		while (inner >= 1) {
			std::cout << inner << ' ';
			--inner;
		}

		std::cout << '\n';
		--outer;
	}
}


//Prints a triangle of numbers with X's in the blank spaces
void Q4FlippedPrinting() {

	int outer{1};

	while (outer <= 5) {

		int inner{5};

		while (inner >= 1) {

			if (inner <= outer) {
				std::cout << inner << ' ';
			} else {
				std::cout << "X ";
			}

			--inner;
		}

		std::cout << '\n';
		++outer;
	}
}

//https://www.learncpp.com/cpp-tutorial/introduction-to-loops-and-while-statements/
