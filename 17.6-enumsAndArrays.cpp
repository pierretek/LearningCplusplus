//testing out using enums with arrays
#include <iostream>
#include <array>



namespace Animals {

	enum Species {
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		NUM_OF_ANIMALS


	};

	struct Data {
		std::string name{};
		std::string sound{};
		int numLegs{};
	};

	std::array<Data, NUM_OF_ANIMALS> animalList{{
		{"Chicken", "Cluck", 2},
		{"Dog", "Woof", 4},
		{"Cat","Meow",4},
		{"Elephant","Honk",4},
		{"Duck","Quack",2},
		{"Snake","Hiss",0},
		}};

	static_assert(NUM_OF_ANIMALS == animalList.size()); //IMPORTANT, need to know if list is updated
}

void printAnimalInfo(const Animals::Data& animal) {
	std::cout << "A " << animal.name << " has " << animal.numLegs << " legs and says " << animal.sound << '\n';
}

void getAnimalInput() {
	std::string animal{};
	std::cin >> animal;

	Animals::Species foundAnimal{Animals::NUM_OF_ANIMALS};

	//Printing out the matched animal names (if there are any)
	std::cout << "\nMATCHED ANIMAL NAMES:\n";

	for (uint16_t i{0}; i < Animals::NUM_OF_ANIMALS; i++) {
		if (animal == Animals::animalList[i].name) {

			foundAnimal = static_cast<Animals::Species>(i);

			// std::cout << Animals::animalList[i].name << '\n';
			printAnimalInfo(Animals::animalList[i]);

		}
	}

	if (foundAnimal == Animals::NUM_OF_ANIMALS) {
		std::cout << "NONE\n";
	}

	//Printing out the unmatched animals
	std::cout << "\nUNMATCHED ANIMAL NAMES:\n";

	for (uint16_t i{0}; i < Animals::NUM_OF_ANIMALS; i++) {

		if (static_cast<Animals::Species>(i) != foundAnimal) {

			// std::cout << Animals::animalList[i].name << '\n';
			printAnimalInfo(Animals::animalList[i]);

		}
	}
}

int main() {

	Animals::Data animal{};
	std::cout << "Enter the Name of an Animal: ";
	getAnimalInput();

	return 0;
}


//https://www.learncpp.com/cpp-tutorial/stdarray-and-enumerations/
