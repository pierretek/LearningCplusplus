//testing out range based loops to traverse vectors
#include <iostream>
#include <vector>

template <typename T>
void isValueInArray(const T& value, const std::vector<T>& array) {

	//const auto& is best practice for range based loops
	for (const auto& val : array) {
		if (val == value) {
			std::cout << value << " was found." << '\n';
			return;
		}
	}

	std::cout << value << " was not found." << '\n';

}


int main() {

	std::vector<std::string> names{"Alex","Betty","Caroline","Dave","Emily","Fred","Greg","Holly"};
	std::string name{};

	while (true) {

		std::cout << "Enter a name: ";
		std::cin >> name;

		isValueInArray(name, names);
	}

	std::cout << "Hello World" << '\n';
	return 0;
}

//https://www.learncpp.com/cpp-tutorial/range-based-for-loops-for-each/
