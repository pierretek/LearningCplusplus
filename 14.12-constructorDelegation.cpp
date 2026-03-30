#include <iostream>


class Ball {

	private:
	std::string color{"black"};
	double radius{10.0};

	public:

	//--------------Example with 4 constructors (innefient)

	// Ball(std::string_view clr, double rad)
	// 	:color{clr}, radius{rad} {
	// }

	// Ball(std::string_view clr)
	// 	:color{clr} {
	// }

	// Ball(double rad)
	// 	:radius{rad} {
	// }

	// Ball() {}


	//--------------Example with 2 constructors (better)
	
	//Handles (color) and delegates to other constructor
	Ball(double rad)
		:Ball("black", rad) {
	}

	//Handles (color, radius), (color), and neither
	Ball(std::string_view clr = "black", double rad = 10.0):
		color{clr}, radius{rad} {
	}	

	//getters to use in the print function
	std::string getColor() { return color; }
	double getRadius() { return radius; }

};


void print(Ball& ball) {

	std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";

}

int main() {
	Ball def{};
	Ball blue{"blue"};
	Ball twenty{20.0};
	Ball blueTwenty{"blue", 20.0};

	print(def);
	print(blue);
	print(twenty);
	print(blueTwenty);
	return 0;
}
