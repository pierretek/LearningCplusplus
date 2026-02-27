#include <iostream>

// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int amount) {
	if (amount < 0) return "negative";
	if (amount == 0) return "no";
	if (amount == 1) return "a single";
	if (amount == 2) return "a couple of";
	if (amount == 3) return "a few";
	return "many";
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(int amount) {
	if (amount == 1) return "apple";

	return "apples";

}

int main() {
	constexpr int maryApples{3};
	std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

	std::cout << "How many apples do you have? ";
	int numApples{};
	std::cin >> numApples;

	std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/chapter-6-summary-and-quiz/
