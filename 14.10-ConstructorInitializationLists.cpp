//Using constructor initialization lists
#include <iostream>


class Ball {

	private:
	std::string color{};
	double radius{};

	public:

	//Here is how the initialization list works
	Ball(std::string_view clr, double rad)
		: color{clr}, radius{rad} {

		std::cout << "Constructed a " << color << " Ball, with radius: " << radius << '\n';
	}

	std::string_view getColor() {
		return color;
	}

	double getRadius() {
		return radius;
	}

};


void print(Ball& ball) {

	std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";

}

int main() {
	Ball blue{"blue", 10.0};
	print(blue);

	Ball red{"red", 12.0};
	print(red);

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/constructor-member-initializer-lists/
