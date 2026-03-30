//Practicing working with classes and member functions

#include <iostream>
#include <cmath>


//Making the class
class Point2D {

	private:
	double m_x{};
	double m_y{};

	public:

	Point2D(double x, double y):
		m_x{x}, m_y{y} {

	}

	Point2D() = default; //Default Constructor (No Arguments)

	void print() const {
		std::cout << "Point2D(" << m_x << ", " << m_y << ")\n";
	}

	double distanceTo(Point2D& second) const {

		return std::sqrt((m_x - second.m_x) * (m_x - second.m_x)
			+ (m_y - second.m_y) * (m_y - second.m_y));
	}

};


//Testing the class
int main() {
	Point2D first{};
	Point2D second{3.0, 4.0};

	// Point2D third{ 4.0 }; // should error if uncommented

	first.print();
	second.print();

	std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

	return 0;
}

// https://www.learncpp.com/cpp-tutorial/chapter-14-summary-and-quiz/
