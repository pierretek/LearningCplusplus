
//Just a simple calculator program demonstrating switch statements

#include <iostream>


int calculator(int first, int second, char symbol) {

	switch (symbol) {
		case '+':
			return first + second;
		case '-':
			return first - second;
		case '*':
			return first * second;
		case '/':
			return first / second;
		case '%':
			return first % second;
		default:
			std::cout << "ERROR: Invalid Operator!\n";
			return 0;
	}
}

int main() {

	std::cout << calculator(1, 2, '+');

	return 0;
}
