//Working with class templates and member functions
#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class Triad {

	private:
	T first{};
	U second{};
	V third{};


	public:

	Triad(const T& fir,const U& sec,const V& thi):
		first{fir}, second{sec}, third{thi} {

	}

	
	const T& getFirst() const { return first; }
	const U& getSecond() const { return second; }
	const V& getThird() const { return third; }

	void print() const;

};

template <typename T, typename U, typename V>
void Triad<T,U,V>::print() const {
	std::cout << "[" << first << ", " << second << ", " << third << "]\n";
}


int main() {
	Triad<int, int, int> t1{1, 2, 3};
	t1.print();
	std::cout << '\n';
	std::cout << t1.getFirst() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{1, 2.3, "Hello"s};
	t2.print();
	std::cout << '\n';

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/class-templates-with-member-functions/
