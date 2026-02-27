#include <iostream>

void Q1CountTo20();
void Q2SumTo(int num);
void Q4FizzBuzz(int num);
void Q5FizzBuzzPop(int num);

int main() {
	// Q1CountTo20();

	// Q2SumTo(5);

	// Q4FizzBuzz(50);

	Q5FizzBuzzPop(50);

	return 0;
}


//Simple for loop that counts to 20
void Q1CountTo20() {

	for (int i{0}; i <= 20; ++i) {
		std::cout << "Number: " << i << '\n';
	}
}

//Simple for loop that counts to 20
void Q2SumTo(int num) {

	unsigned long total{};

	for (int i{num}; i > 0; --i) {
		total += i;
	}

	std::cout << "The Total is: " << total << '\n';
}

void Q4FizzBuzz(int num) {

	for (int i{1}; i <= num; ++i) {

		if ((i % 5 == 0) && (i % 3 == 0)) {
			std::cout << "FizzBuzz" << '\n';

		} else if (i % 3 == 0) {
			std::cout << "Fizz" << '\n';

		} else if (i % 5 == 0) {
			std::cout << "Buzz" << '\n';

		} else {
			std::cout << i << '\n';
		}
	}

}

void Q5FizzBuzzPop(int num) {

	for (int i{1}; i <= num; ++i) {

		if (!(i % 3)) {
			std::cout << "Fizz";
		}
		if (!(i % 5)) {
			std::cout << "Buzz";
		}
		if (!(i % 7)) {
			std::cout << "Pop";
		}

		if ((i % 7) && (i % 5) && (i % 3)) std::cout << i;

		std::cout << '\n';
	}

}

// cool 1 liner i found
// for (int i = 1; i <= num; i++)
// std::cout << (i % 3 ? "" : "Fizz") << (i % 5 ? "" : "Buzz") << (i % 3 && i % 5 ? std::to_string(i) : "") << "\n";
