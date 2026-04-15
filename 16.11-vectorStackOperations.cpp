//using the stack operations on vectors 

#include <iostream>
#include <vector>

template <typename T>
void printVector( std::vector<T>& vector) {

	std::cout << " (Stack: ";

	//return early if empty
	if (vector.size() == 0) {
		std::cout << "Empty)\n";
		return;
	}

	//print every elemnt
	for (const T& element : vector) {
		std::cout << element << " ";
	}

	std::cout << ")\n";

}

template <typename T>
void pushAndPrint( std::vector<T>& vector,const T& element) {

	vector.push_back(element); //adds new element to vector

	std::cout << "Push " << element;
	printVector(vector);

}

template <typename T>
void popAndPrint( std::vector<T>& vector) {

	T top = vector.back(); //gets the last element of the vector
	vector.pop_back(); 		//removes the last element of the vector

	std::cout << "Pop " << top;
	printVector(vector);

}

int main() {
	std::vector<int> vector{};

	pushAndPrint(vector, 1);
	pushAndPrint(vector, 2);
	pushAndPrint(vector, 3);

	popAndPrint(vector);
	pushAndPrint(vector, 4);

	popAndPrint(vector);
	popAndPrint(vector);
	popAndPrint(vector);

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/stdvector-and-stack-behavior/
