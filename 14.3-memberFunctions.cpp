//Testing member functuons in structs
#include <iostream>

struct IntPair {
	int first{};
	int second{};

	//two member functions
	void print() {
		std::cout << "First: " << first << ", Second: " << second << '\n';
	}

	bool isEqual(IntPair& pair) {
		return (pair.first == first) && (pair.second == second);
	}
};

//testing the struct
int main() {
	IntPair p1{1, 2};
	IntPair p2{3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");
}


//https://www.learncpp.com/cpp-tutorial/member-functions/
