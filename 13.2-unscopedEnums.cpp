//practicing using enums inside a namespace
#include <iostream>

namespace Monster {
	
	enum MonsterType {
		orc,
		goblin,
		troll,
		ogre,
		skeleton
	};

}

int main() {

	Monster::MonsterType monster1{Monster::troll};
	Monster::MonsterType monster2{Monster::goblin};
	Monster::MonsterType monster3{Monster::ogre};

	if (monster3 == Monster::ogre) {
		std::cout << "rYo this is an Ogre" << '\n';
	}


	return 0;
}
