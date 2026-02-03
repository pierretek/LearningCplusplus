#include <iostream>
#include <string>


//i dont feel like making programs for every single lesson

int main() {

	std::string name{};
	int age{};

	std::cout << "Please enter your name buddy: ";
	std::getline(std::cin >> std::ws, name);


	std::cout << "Now your age: ";
	std::cin >> age;

	std::cout << "\nThe length of your name is: " << name.length() << '\n';
	std::cout << "Your name plus your age is: " << age + static_cast<int>(name.length());

}

//https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/


