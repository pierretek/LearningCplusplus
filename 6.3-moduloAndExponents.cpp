//This simple program detects if the given input is even
#include <iostream>

constexpr bool isEven(int input) {
	return ((input % 2) == 0);
}

int main() {

	int x{};

	while (true) {
		std::cout << "\nHello, enter any number: ";
		std::cin >> x;

		if (isEven(x)) {
			std::cout << "That value is even!";
		} else {
			std::cout << "That value is NOT even";
		}
	}


	return 0;
}

// https://www.learncpp.com/cpp-tutorial/remainder-and-exponentiation/
