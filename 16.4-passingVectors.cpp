//trying out passing vectors as function arguments
#include <iostream>
#include <vector>


template <typename T>
void printElement3(const std::vector<T>& arr); //type ambiguous vector using template T
void printElement(const auto& vector, int index); //type ambiguous vector using auto


//Takes a container and an index then prints the element at that index inside the container
void printElement(const auto& vector, int index) {

	if (index < 0 || (index > vector.size() - 1)) {

		std::cout << "Invalid Index" << '\n';

	} else {

		std::cout << "YourVector[" << index << "] = " << vector[index] << '\n';
	}

}


//testing out the printElement() function
int main() {

	std::vector v1{0, 1, 2, 3, 4};
	printElement(v1, 2);
	printElement(v1, 5);

	std::vector v2{1.1, 2.2, 3.3};
	printElement(v2, 0);
	printElement(v2, -1);

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/passing-stdvector/
