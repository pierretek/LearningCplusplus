//making a potion shop to play with fixed size arrays
#include <iostream>
#include <array>
#include <string_view>
#include "random.h"

using namespace std::string_view_literals;

namespace Potion {
	enum Type {
		HEALING,
		MANA,
		SPEED,
		INVISIBILITY,
		MAX_POTIONS
	};

	std::array types{HEALING,MANA,SPEED,INVISIBILITY};
	std::array prices{15, 12, 30, 50};
	std::array names{"Healing"sv, "Mana"sv, "Speed"sv, "Invisibility"sv};

	//Checking if the arrays are long enough
	static_assert (types.size() == MAX_POTIONS);
	static_assert (prices.size() == MAX_POTIONS);
	static_assert (names.size() == MAX_POTIONS);

	void displayShop() {

		std::cout << "\nHere is our potion selection:" << '\n';

		for (const auto& item : types) {
			std::cout << "\t " << item << " - " << names[item] << " ($" << prices[item] << ")\n";
		}


	}
}

class Player {

	private:
	int m_gold{};
	std::string_view m_name{};
	std::array <int, Potion::MAX_POTIONS> m_inv{};

	public:
	Player(std::string_view name): m_gold{Random::get(50,100)}, m_name{name} {

	}

	std::string_view getName() const {
		return m_name;
	}

	int getGold() const {
		return m_gold;
	}

	auto getInventory() {
		return m_inv;
	}

	bool canAffordItem(Potion::Type potion) {

		if (m_gold > Potion::prices[potion]) {
			return true;
		}

		return false;
	}

	void purchaseItem(Potion::Type potion) {

		m_gold -= Potion::prices[potion];
		m_inv[potion]++;

	}
};

bool isValidInput(char c) {

	//chacking if the input is one of the potions
	for (int i{0}; i < Potion::MAX_POTIONS; i++) {
		if (c == i) return true;
	}

	return false;
}


void shop(Player& p) {
	using namespace Potion;

	char input{};
	unsigned int inputInt{};

	do {

		displayShop();

		std::cout << "Remaining balance: " << p.getGold() << '\n';
		std::cout << "What would you like to buy? (enter number, or q to quit): ";

		std::cin >> input;

		//only taking 1 letter at a time
		std::cin.clear();
		std::cin.ignore(1e10, '\n');

		//if the user quits
		if (input == 'q') {
			std::cout << "Thanks for shopping, come again soon...\n";
			break;
		}

		//converting input to int
		inputInt = input - '0';

		//if the user entered an invalid character 
		if (!isValidInput(inputInt)) {
			std::cout << "Invalid character, try again...\n";
			continue;
		}

		//if the user cant  afford the item
		if (!p.canAffordItem(types[inputInt])) {
			std::cout << "\nSorry you can't afford the " << names[inputInt] << " potion, try another potion\n";
			continue;

		//if the user can afford the item
		} else {
			std::cout << "\nYou have purchased the " << names[inputInt] << " potion!\n";
			p.purchaseItem(types[inputInt]);
		}

	} while (!isValidInput(inputInt) || !p.canAffordItem(types[inputInt]) || input != 'q');


	std::cout << "\n\t---TOTAL HAUL---" << '\n';
	for (const auto& item : p.getInventory()) {
		if (item > 0) {
			std::cout << "\t - " << item << "x " << names[item] << " potion\n";
		}
	}
}

int main() {

	std::cout << "Welcome to the potion shop bro" << '\n';
	std::cout << "Enter your name: ";

	std::string name{};
	std::cin >> name;
	Player p{name};

	std::cout << "Hello " << p.getName() << ", You have " << p.getGold() << " Gold." << '\n';
	shop(p);

	std::cout << "Bye Bye..." << '\n';

	return 0;
}


//https://www.learncpp.com/cpp-tutorial/chapter-17-summary-and-quiz/
