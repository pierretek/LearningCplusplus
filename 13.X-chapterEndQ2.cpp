//practicing class template argument deduction (CTAD)

#include <iostream>


//Class Template
template < typename T>
struct Triad {
	T first{};
	T second{};
	T third{};
};


//Deduction guide
template <typename T>
Triad(T, T, T) -> Triad<T>;


//Function Template
template < typename T>
void printTriad(const Triad<T>& triad) {

	std::cout << "[" << triad.first
		<< ", " << triad.second
		<< ", " << triad.third << "]" << '\n';
}


//main function
int main() {


	Triad t1{1,5,2};
	printTriad(t1);

	Triad t2{1.2,0.5,2.6};
	printTriad(t2);


	return 0;
}
