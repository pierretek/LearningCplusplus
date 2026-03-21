//practicing passing structs to and from functions

#include <iostream>

struct AdInfo {
	int adsWatched{};
	int percentClicked{};
	int averageEarnings{};
};


//gets the information from the user and fills the struct accordingly
AdInfo getAdInfo() {

	AdInfo input{};

	std::cout << "\nPlease Enter the Number of Ads watched" << '\n';
	std::cin >> input.adsWatched;

	std::cout << "\nPlease Enter the percentage of users who clicked the ad" << '\n';
	std::cin >> input.percentClicked;

	std::cout << "\nPlease Enter the average earnings per clicked add" << '\n';
	std::cin >> input.averageEarnings;

	return input;

}

//prints information from the passed in struct
void printAdInfo(const AdInfo& info) {

	std::cout << "\n--Ad Info--" << '\n';
	std::cout << "-Number of Ads Watched: " << info.adsWatched << '\n';
	std::cout << "-User Click through percentage: " << info.percentClicked << '\n';
	std::cout << "-Average Earnings per Ad: " << info.averageEarnings << '\n';


	std::cout << "-Total Daily Profit: " << info.averageEarnings
		* info.adsWatched * info.percentClicked / 100 << '\n';

}

//main function
int main() {

	printAdInfo(getAdInfo());
	return 0;
}


//https://www.learncpp.com/cpp-tutorial/passing-and-returning-structs/
