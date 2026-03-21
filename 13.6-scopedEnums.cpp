//practicing using scoped enums 

#include <iostream>
#include <string_view>

//defining the scoped enum
enum class Animal {
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck
};

//returns the name of a given animal object
std::string_view getAnimalName(Animal a) {

	//bringing the enumerators into this scope
	//doesnt work, im using an older c++ version
	// using enum Animal;

	//matching the enum to the appropiate string
	switch (a) {
		case Animal::pig:
			return "pig";
		case Animal::chicken:
			return "chicken";
		case Animal::goat:
			return "goat";
		case Animal::cat:
			return "cat";
		case Animal::dog:
			return "dog";
		case Animal::duck:
			return "duck";
		default:
			return "invalid animal";
	}

}


//returns the number of legs for a given animal object
int getNumberOfLegs(Animal a) {

	// using enum Animal;

	switch (a) {

		//all 4 legged animals
		case Animal::pig:
		case Animal::goat:
		case Animal::cat:
		case Animal::dog:
			return 4;

		//all 2 legged animals
		case Animal::duck:
		case Animal::chicken:
			return 2;

		default:
			return -1;
	}

}

//testing the functions
int main() {


	Animal animal1{Animal::cat};
	Animal animal2{Animal::chicken};

	std::cout << "A " << getAnimalName(animal1) << " has " << getNumberOfLegs(animal1) << " legs\n";
	std::cout << "A " << getAnimalName(animal2) << " has " << getNumberOfLegs(animal2) << " legs\n";


	return 0;
}


//https://www.learncpp.com/cpp-tutorial/scoped-enumerations-enum-classes/
