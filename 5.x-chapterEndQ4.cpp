//this program gets the name and age of two people then finds the oldest one
#include <iostream>
#include <string>


std::string getName();
int getAge(std::string_view name);

int main() {

	std::cout << "\nHello Person 1:" << '\n';
	std::string_view firstName{getName()};
	int firstAge(getAge(firstName));

	std::cout << "\nHello Person 2:" << '\n';
	std::string_view secondName{getName()};
	int secondAge(getAge(secondName));

	if (firstAge > secondAge) {
		std::cout << firstName << " (" << firstAge << " years) is older than " << secondName << " (" << secondAge << " years)!\n";
	} else {
		std::cout << secondName << " (" << secondAge << " years) is older than " << firstName << " (" << firstAge << " years)!\n";
	}

	return 0;
}

std::string getName() {

	std::string name{};

	std::cout << "What is your name? -> ";
	std::getline(std::cin >> std::ws, name);

	return name;
}

int getAge(std::string_view name) {

	int age{};

	std::cout << "What is " << name << "'s age? -> ";
	std::cin >> age;

	return age;
}

//https://www.learncpp.com/cpp-tutorial/chapter-5-summary-and-quiz/
