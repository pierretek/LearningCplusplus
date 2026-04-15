//Combining vectors and loops
#include <iostream>
#include <vector>
#include <limits>

//Prints a vector of any type
template <typename T>
void printArray(const std::vector<T>& arr) {

	for (int i{0}; i < arr.size(); i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}

//Gets a valid number from the user within a range
template <typename T>
T getValidNumber(T low, T high) {

	T input{};

	while (input < 1 || input > 9) {
		std::cout << "Enter a number between " << low << " and " << high << ": ";
		std::cin >> input;

		// if the user entered an invalid character
		if (!std::cin) std::cin.clear(); // reset any error flags

		std::cin.ignore(100000, '\n'); // ignore any extra characters
	}

	return input;
}

//Find the specified value's index within the specified vector
template <typename T>
int findInArray(const std::vector<T>& arr, T value) {

	for (int i{0}; i < arr.size(); i++) {

		if (arr[i] == value) return i;
	}

	return -1;
}

//Finds the max element within a vector of any time
template <typename T>
T findMax(const std::vector<T>& arr) {

	//returning early if vector empty
	if (arr.size() == 0) return T{};

	T max{arr[0]};

	//finding largest element
	for (int i{0}; i < arr.size(); i++) {
		if (arr[i] > max) max = arr[i];
	}

	return max;
}

int main() {

	//Q1: printing all elements of a vector
	std::vector arr{4, 6, 7, 3, 8, 2, 1, 9};
	std::vector<double> arr2{4, 6, 7, 3, 8, 2, 1, 9};

	for (int i{0}; i < arr.size(); i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';

	//Q2: turn it into a function
	printArray(arr);

	//Q3: find users desired element's index from user input
	//Q4: generalize it to any vector type
	// auto val{getValidNumber(1.0,9.0)};
	double val{3.0};
	printArray(arr);

	int index{findInArray(arr2, val)};

	if (index == -1) {
		std::cout << "The number " << val << " was not found \n";
	} else {
		std::cout << "The number " << val << " has index " << index << '\n';
	}

	//Q5: find max element in a vector
	std::vector data1{84, 92, 76, 81, 56};
	std::cout << findMax(data1) << '\n';

	std::vector data2{-13.0, -26.7, -105.5, -14.8};
	std::cout << findMax(data2) << '\n';

	std::vector<int> data3{ };
	std::cout << findMax(data3) << '\n';

	//Q6: fizzbuzz revamped
	std::vector divisors{3,5,7,11,13,17,19};
	std::vector<std::string_view> words{"fizz","buzz","pop","bang","jazz","pow","boom"};
	bool flag{};

	for (int i{1}; i <= 150; i++) {

		flag = false;

		for (int j{0}; j < divisors.size(); j++) {

			if (i % divisors[j] == 0) {
				std::cout << words[j];
				flag = true;
			}
		}

		if (!flag) std::cout << i;

		std::cout << '\n';

	}


	return 0;
}


//https://www.learncpp.com/cpp-tutorial/arrays-and-loops/
