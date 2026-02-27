//this program calcultes the hieght of a falling ball over 5 seconds

#include <iostream>
constexpr double GRAVITY = 9.81;

//method to get the height from the user
double getHieght() {
	double hieght{};
	std::cout << "Enter the starting hieght of the Building: ";
	std::cin >> hieght;
	return hieght;
}

//Method to Calulate and Print the Ball hieght
void printFallHieght(double startingHieght) {

	double seconds{0};

	double fallHieght{startingHieght};

	while (fallHieght > 0) {

		fallHieght -= (GRAVITY) * (seconds * seconds) / 2;

		if (fallHieght <= 0) {
			std::cout << "After " << seconds
				<< " seconds: " << "The ball is on the ground\n";
			break;
		}

		std::cout << "After " << seconds << " seconds: " << "The ball is "
			<< fallHieght << " High\n";
		
		seconds++;
	}

}

//main method
int main() {

	double hieght{getHieght()};

	std::cout << "Hello World" << '\n';

	printFallHieght(hieght);

	return 0;
}

// https://www.learncpp.com/cpp-tutorial/chapter-8-summary-and-quiz/
