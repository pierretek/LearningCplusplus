//solving problems 1-4 for chapter 16

#include <iostream>
#include <vector>
#include <string_view>
#include <cassert>
#include <utility>

using namespace std::string_view_literals;


//Q2 - subscripting with enums
namespace Item {

	enum Type {
		HEALTH_POTIONS,
		TORCHES,
		ARROWS,
		NUM_OF_ITEMS
	};
}

void printUserInventory(const std::vector<int>& itemList) {

	int sum{};

	for (uint16_t i{0}; i < Item::NUM_OF_ITEMS; i++) {

		std::cout << "You have " << itemList[i] << " ";

		bool plural{itemList[i] > 1};

		sum += itemList[i];

		//converting the enum value to a string with correct pluralisation
		switch (i) {

			case Item::HEALTH_POTIONS:
				std::cout << (plural ? "health potions" : "health potion") << '\n';
				break;

			case Item::TORCHES:
				std::cout << (plural ? "torches" : "torch") << '\n';
				break;

			case Item::ARROWS:
				std::cout << (plural ? "arrows" : "arrow") << '\n';
				break;

			default:
				std::cout << "INVALID\n";
		}
	}

	std::cout << "You have a total of " << sum << " items!\n";
}


//Q3 - finding index of min and max elements
template <typename T>
std::pair<int, int> findMinMaxIndices(const std::vector<T>& vector) {
	if (vector.size() == 0) return {-1,-1};

	uint16_t minIndex{};
	uint16_t maxIndex{};

	for (uint16_t i{1}; i < vector.size(); i++) {
		if (vector[i] > vector[maxIndex]) maxIndex = i;
		if (vector[i] < vector[minIndex]) minIndex = i;
	}

	return {minIndex, maxIndex};
}

template <typename T>
void printVector(std::vector<T>& vector) {

	std::cout << "{";

	//return early if empty
	if (vector.size() == 0) {
		std::cout << " }\n";
		return;
	}

	//print every elemnt
	for (const T& element : vector) {
		std::cout << element << ", ";
	}

	std::cout << "}\n";

}

int main() {

	// Q1 - a bunch of practice vectors
	std::vector evens{2,4,6,8,10,12};
	const std::vector numbers{1.2,3.4,5.6,7.8};
	const std::vector names{"Alex"sv, "Brad"sv, "Charles"sv, "Dave"sv};
	std::vector oneElement{12};
	std::vector<int> twelveElements(12);



	//Q2 - subscripting with enums
	std::vector playerItems{1,5,10}; //potions, torches, arrows

	assert(playerItems.size() == Item::NUM_OF_ITEMS);

	printUserInventory(playerItems);



	//Q3 - finding index of min and max elements
	std::vector v1{3, 8, 2, 5, 7, 8, 3};
	std::pair p1{findMinMaxIndices(v1)};

	std::cout << "\nWith vector: ";
	printVector(v1);
	std::cout << "The min element has index " << p1.first <<
		" and value " << v1[p1.first] << '\n';
	std::cout << "The max element has index " << p1.second <<
		" and value " << v1[p1.second] << '\n';

	std::vector v2{5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6};
	std::pair p2{findMinMaxIndices(v2)};

	std::cout << "\nWith vector: ";
	printVector(v2);
	std::cout << "The min element has index " << p2.first <<
		" and value " << v2[p2.first] << '\n';
	std::cout << "The max element has index " << p2.second <<
		" and value " << v2[p2.second] << '\n';



	//Q4 - doing Q3 but with an infinite vector
	int num{};
	std::vector<int> nums{};

	std::cout << '\n';

	//getting values from user
	while (num != -1) {
		std::cout << "Enter a number (-1 to end): ";
		std::cin >> num;

		if (!nums.size() && num == -1) {
			std::cout << "Bruh way too soon..." << '\n';
			break;
		}

		if (num != -1) nums.push_back(num);

	}

	if (!nums.size()) return 0; //returning early if empty vector

	std::pair p3{findMinMaxIndices(nums)};
	
	std::cout << "\nWith vector: ";
	printVector(nums);

	std::cout << "The min element has index " << p3.first <<
		" and value " << nums[p3.first] << '\n';
	std::cout << "The max element has index " << p3.second <<
		" and value " << nums[p3.second] << '\n';



	return 0;
}


//https://www.learncpp.com/cpp-tutorial/chapter-16-summary-and-quiz/
