//more practice with std::vector
#include <iostream>
#include <vector>

int main() {
	std::vector hello{'h','e','l','l','o'};

	//Different ways of getting the length of a vector
	std::cout << " Size of vector: " << hello.size() << '\n';
	std::cout << " Size of vector: " << std::size(hello) << '\n';

	//Different ways of indexing/subscripting
	std::cout << " hello[1]: " << hello[1] << '\n';
	std::cout << " hello[1]: " << hello.at(1) << '\n';

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/stdvector-and-the-unsigned-length-and-subscript-problem/
