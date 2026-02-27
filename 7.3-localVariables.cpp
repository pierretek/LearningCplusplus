
//a simple swappng program to investigate local scope variables
#include <iostream>

int main() {

	int smaller{}, larger{};
	std::cout << "Enter smaller number> ";
	std::cin >> smaller;
	
	std::cout << "Enter enter larger number> ";
	std::cin >> larger;

	if (smaller > larger) {
		std::cout << "Swapping number..." << '\n';
		int temp{};

		temp = larger;
		larger = smaller;
		smaller = temp;
	}//temp DIES here

	std::cout << "The smaller number is "<<smaller<<" and the larger one is "<<larger<<'\n';
	return 0;
}

//https://www.learncpp.com/cpp-tutorial/local-variables/
