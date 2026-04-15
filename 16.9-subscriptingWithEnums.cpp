//Using a namespaced enum to access a vector
#include <iostream>
#include <vector>
#include <cassert>

namespace Animals {

	enum {
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		NUM_OF_ANIMALS

	};
}

int main() {

	std::vector<int> legs{2,4,4,4,2,0};

	//exiting program if legs doesnt match number of animals
	assert(legs.size() == Animals::NUM_OF_ANIMALS);

	std::cout << "Elephant legs: " << legs[Animals::ELEPHANT]; //accessing with enum

	
	return 0;
}

//https://www.learncpp.com/cpp-tutorial/array-indexing-and-length-using-enumerators/
