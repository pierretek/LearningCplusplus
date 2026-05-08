//trying out different ways of indexing an array
#include <iostream>
#include <array>

int main() {

	std::array hello{'h','e','l','l','o'};

	std::cout << hello[1]; //Using subscript operator

	std::cout << hello.at(1); //Using member function

	std::cout << std::get<1>(hello); //Using non-member function (works in compile time too)

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/stdarray-length-and-indexing/
