//Converting the struct from lesson 13.10 to a fraction

#include <iostream>

class Fraction {

	private:
	int numerator{0};
	int denominator{1};

	public:
	Fraction(int num, int den):
		numerator{num}, denominator{den} {

	}

	Fraction() = default;

	//Printing the fraction
	void printFraction() const {
		std::cout << numerator << "/" << denominator;
	}

	//Multiplying two fractions
	Fraction multiplyFractions(Fraction& other)const {
		return Fraction{other.numerator * numerator, other.denominator * denominator};
	}

	void setNumerator(int num) { numerator = num; }
	void setDenominator(int den) { denominator = den; }
};



//Function to read a fraction from the user
Fraction readFraction() {
	Fraction input{};
	int temp{};

	std::cout << "\nEnter the Numerator of the Fraction ->";
	std::cin >> temp;
	input.setNumerator(temp);

	std::cout << "\nEnter the Denominator of the Fraction ->";
	std::cin >> temp;
	input.setDenominator(temp);

	return input;

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
	a.printFraction();

	std::cout << "\nFraction B: ";
	b.printFraction();

	//Multiplying fractions and printing the results
	std::cout << "\nFractions Multplied together: ";
	a.multiplyFractions(b).printFraction();
	std::cout << '\n';

}

//https://www.learncpp.com/cpp-tutorial/chapter-14-summary-and-quiz/
