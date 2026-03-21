//practicing passing structs to and from functions again

#include <iostream>

struct Fraction {
	int numerator{0};
	int denominator{1};
};



//Function to read a fraction from the user
Fraction readFraction() {
	Fraction input{};

	std::cout << "\nEnter the Numerator of the Fraction ->";
	std::cin >> input.numerator;

	std::cout << "\nEnter the Denominator of the Fraction ->";
	std::cin >> input.denominator;

	return input;

}

// Function to print a fraction
void printFraction(const Fraction& fraction) {

	std::cout << fraction.numerator << "/" << fraction.denominator;

}

//Function to multply two fractions
Fraction multiplyFractions(const Fraction& fraction1, const Fraction& fraction2) {

	Fraction result{};

	result.numerator = fraction1.numerator * fraction2.numerator;
	result.denominator = fraction1.denominator * fraction2.denominator;

	return result;

}


//main function
int main() {

	//Reading fractions from user
	std::cout << "\nGetting Values for Fraction A" << '\n';
	Fraction a{readFraction()};

	std::cout << "\nGetting Values for Fraction B" << '\n';
	Fraction b{readFraction()};

	//Printing Fractions
	std::cout << "\nFraction A: ";
	printFraction(a);
	
	std::cout << "\nFraction B: ";
	printFraction(b);

	//Multiplying fractions and printing the results
	std::cout << "\nFractions Multplied together: ";
	printFraction(multiplyFractions(a, b));
	std::cout << '\n';

}


//https://www.learncpp.com/cpp-tutorial/passing-and-returning-structs/
