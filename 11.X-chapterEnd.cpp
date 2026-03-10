//Practicing making functon templates
#include <iostream>


//Q1. Add two numbers of same type
template <typename T>
T add(T num1, T num2) {
	return num1 + num2;
}


//Q2. Multiply any number with an integer
template <typename T>
T mult(T num1, int num2) {
	return num1 * num2;
}

//Q3. Subtract two values of different types
template <typename T, typename U>
auto sub(T num1, U num2) {
	return num1 - num2;
}

int main() {

	//Q1.
	std::cout << "\nQ1." << '\n';
	std::cout << add(5,9) << '\n';
	std::cout << add(4.5, 1.2) << '\n';

	//Q2.
	std::cout << "\nQ2." << '\n';
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(4.5, 4) << '\n';
	
	//Q3.
	std::cout << "\nQ3." << '\n';
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/chapter-11-summary-and-quiz/
