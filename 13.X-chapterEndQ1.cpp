//playing with structs and enums

#include <iostream>
#include <string>

enum MonsterType {
	ogre,
	dragon,
	orc,
	giantSpider,
	slime
};

struct Monster {
	MonsterType type{};
	int health{};
	std::string name{};
};


//Convert monster type to a string
std::string_view getMonsterTypeString(MonsterType type) {

	switch (type) {
		case ogre:
			return "Ogre";
		case dragon:
			return "Dragon";
		case orc:
			return "Orc";
		case giantSpider:
			return "Giant Spider";
		case slime:
			return "Slime";
		default:
			return "Unknown";
	}

}

//print the details of the monster struct
void printMonster(const Monster& monster) {

	std::string_view name = monster.name;
	int health = monster.health;
	std::string_view type = getMonsterTypeString(monster.type);

	std::cout << "This " << type << " is named " << name << " and has " << health << " Health.\n";

}


//main function
int main() {

	Monster bobert = Monster{ogre,900,"bobert"};
	Monster jonny = Monster{dragon,67,"jonny"};


	printMonster(bobert);
	printMonster(jonny);

	return 0;
}
