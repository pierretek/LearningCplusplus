//Making arrays with structs in them
#include <iostream>
#include <string_view>
#include <array>

struct Item {
	std::string_view name{};
	int gold{};

	void print() {
		std::cout << "The " << name << " costs " << gold << " gold\n";
	}
};

int main() {

	//using CTAD and explicity defining objects as 'Item'
	std::array items{
		Item{"cheese", 60},
		Item{"bread", 40},
		Item{"orange", 10},
		Item{"granola", 20}
	};

	//need DOUBLE braces if you want to avoid writing the type name
	std::array<Item, 4> items2{{
		{"cheese", 60},
		{"bread", 40},
		{"orange", 10},
		{"granola", 20}
	}};


	//testing it out
	for (Item i : items) {
		i.print();
	}

	for (Item i : items2) {
		i.print();
	}

	return 0;
}


