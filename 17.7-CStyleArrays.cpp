//playing with C style arrays
#include <iostream>
#include <iterator>

int main() {

	int a[5]{1,2,3,4,5};
	int b[]{1,2,3,4,5};  //leave out the array length (better)

	constexpr int c[3]{};

	//Best way to get the size of an array (C++17) (needs <iterator>)
	std::cout << std::size(a) << '\n';
	std::cout << std::size(c) << '\n';

	//Old way
	std::cout << sizeof(a) / sizeof(a[0]) << '\n';
	std::cout << sizeof(c) / sizeof(c[0]) << '\n';

	//Range based loops work with C style arrays!
	for (int i : a) {
		std::cout << i;
	}

	//Question 3: Array of perfect squares
	constexpr int squares[]{0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
	int input{};

	while (true) {

		std::cout << "\nEnter a number (or -1 to quit): ";
		std::cin >> input;

		if (input == -1) break;

		if (!std::cin) { //Clearing invalid input

			std::cin.clear();
			std::cin.ignore(1e10, '\n');
			std::cout << "Invalid input try again" << '\n';
			continue;
		}

		bool sqr{false};

		//i love range based for loops 	 
		for (int s : squares) {
			if (s == input) sqr = true;
		}

		if (sqr) {
			std::cout << input << " is a perfect square" << '\n';
		} else {
			std::cout << input << " is NOT a perfect square" << '\n';
		}

	}
	std::cout << "BYE lol" << '\n';
}

//https://www.learncpp.com/cpp-tutorial/introduction-to-c-style-arrays/
