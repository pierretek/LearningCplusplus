//retroactively adding this to explain pointers and references
#include <iostream>

int main() {

	//reference example
	char a{'a'};
	char& b{a}; //b is a reference to a (acts EXACTLY like a)
	std::cout << b << '\n';

	b = 'c';
	std::cout << a << '\n'; //now it prints 'c'

	//address operators
	int x{5};
	std::cout << x << '\n';  // print the value 
	std::cout << &x << '\n'; // print the memory address 
	std::cout << *(&x) << '\n'; //print the value

	//pointers
	int* ptr;

	//initializing a pointer
	int* ptr2{&x};
	ptr = &x;

	std::cout << *ptr << '\n'; //getting the value at the address of ptr (dereferencing)

	return 0;
}
