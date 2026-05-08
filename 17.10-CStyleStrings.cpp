//Using pointer arithmetic to print out a C style string
#include <iostream>
#include <cstring>



void printString(const char str[]) {

	const char* beg{str}; 
	const char* end{str + strlen(str)};

	//While the beggining pointer doesnt equal the end 
	for (; beg != end; ++beg) {
		std::cout << *beg;
	}
	
	std::cout << '\n';
}

void printStringBackwards(const char str[]) {

	const char* beg{str};
	const char* end{str + strlen(str)};

	//While the beggining pointer doesnt equal the end 
	for (; end != beg-1; --end) {
		std::cout << *end;
	}

	std::cout << '\n';
}

int main() {
	char hello[]{"hello world!"};

	printString(hello);
	printStringBackwards(hello);

	return 0;
}


// https://www.learncpp.com/cpp-tutorial/c-style-strings/
