//trying out std::vector
#include <iostream>
#include <vector>

int main() {

	//Question 1:
	std::vector firstVector{1,4,9,16,25}; //using CTAD
	std::vector<int> secondVector{1,4,9,16,25}; //explicit type given

	//Question 2:
	std::vector<int>(10); //array of length 10 elements
	std::vector<int>{10}; //single element '10'

	//Question 3:
	std::vector<double> temperatures(365);

	//Question 4:
	std::vector<int> nums(3);

	std::cout << "Enter 3 nums: ";
	std::cin >> nums[0];
	std::cin >> nums[1];
	std::cin >> nums[2];

	std::cout << "Their sum is: " << nums[0] + nums[1] + nums[2] << '\n';
	std::cout << "Their product is: " << nums[0] * nums[1] * nums[2] << '\n';

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/introduction-to-stdvector-and-list-constructors/
