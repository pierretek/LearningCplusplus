//A single file solution to the problem quiz for chapter 15 on learncpp.com

#include <iostream>
#include "random.h"

class Monster {

	public:

	//nested unscoped enum
	enum Type {
		Dragon,
		Goblin,
		Orc,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MaxMonsterTypes
	};


	//constructor 
	Monster(Type typ, std::string_view nam, std::string_view rar, int hp):
		type{typ}, name{nam}, roar{rar}, healthPoints{hp} {

	}

	void print();

	private:

	Type type{};
	std::string name{};
	std::string roar{};
	int healthPoints{};

};

std::string_view getTypeString(Monster::Type type);

void Monster::print() {
	std::string typeName{getTypeString(type)};

	if (healthPoints > 0) {

		std::cout << name << " the " << typeName
			<< " has " << healthPoints << " hit points and says " << roar << ".\n";

	} else {

		std::cout << name << " the " << typeName << " is completely dead.\n";
	}
}

std::string_view getTypeString(Monster::Type type) {
	switch (type) {
		case Monster::Dragon:
			return "Dragon";
		case Monster::Goblin:
			return "Goblin";
		case Monster::Orc:
			return "Orc";
		case Monster::Skeleton:
			return "Skeleton";
		case Monster::Troll:
			return "Troll";
		case Monster::Vampire:
			return "Vampire";
		case Monster::Zombie:
			return "Zombie";
		default:
			return "INVALID";
	}
}

//Namespace that makes a random monster using random.h
namespace MonsterGenerator {

	//returns a name string based on the input number [1,5] inclusive
	std::string_view getName(int i) {
		switch (i) {

			case 1:
				return "Johny";
			case 2:
				return "Yello";
			case 3:
				return "Tubby";
			case 4:
				return "Chubby";
			case 5:
				return "Pluto";
			default:
				return "INVALID";
		}
	}

	//returns a roar string based on the input number [1,5] inclusive
	std::string_view getRoar(int i) {
		switch (i) {

			case 1:
				return "*AHH*";
			case 2:
				return "*poopoo*";
			case 3:
				return "*fart*";
			case 4:
				return "*squirm*";
			case 5:
				return "*smash*";
			default:
				return "INVALID";
		}
	}

	//returns a monster type based on the input number [1,7] inclusive
	Monster::Type getType(int i) {
		switch (i) {

			case 1:
				return Monster::Dragon;
			case 2:
				return Monster::Goblin;
			case 3:
				return Monster::Orc;
			case 4:
				return Monster::Skeleton;
			case 5:
				return Monster::Troll;
			case 6:
				return Monster::Vampire;
			case 7:
				return Monster::Zombie;
			default:
				return Monster::MaxMonsterTypes;
		}
	}

	Monster generate() {
		return Monster(getType(Random::get(1, 7)), getName(Random::get(1, 5)),
			getRoar(Random::get(1, 5)), Random::get(-20, 300));
	}

}


//Testing the class
int main() {

	//manually making monsters
	Monster skeleton{Monster::Skeleton, "Bones", "*rattle*", 4};
	skeleton.print();

	Monster vampire{Monster::Vampire, "Nibblez", "*hiss*", 0};
	vampire.print();

	//Trying out the monster generator
	for (int i = 0; i < 10; i++) {
		Monster m{MonsterGenerator::generate()};
		m.print();
	}

	return 0;
}


//https://www.learncpp.com/cpp-tutorial/chapter-15-summary-and-quiz/
