//trying out access modifers in a class
#include <iostream>

class Point3D {

	//Everything below this is private
	private:

	int m_x{};
	int m_y{};
	int m_z{};

	//Everything below this is public
	public:

	void setValues(int x, int y, int z) {
		m_x = x;
		m_y = y;
		m_z = z;
	}

	//making these two functions constant cuz theyre not changing the member variables
	void print() const {
		std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
	}

	bool isEqual(Point3D& point) const {
		return (m_x == point.m_x) && (m_y == point.m_y) && (m_z == point.m_z);
	}

};


//testing the class
int main() {
	Point3D point;
	point.setValues(1, 2, 3);

	point.print();
	std::cout << '\n';


	Point3D point1{};
	point1.setValues(1, 2, 3);

	Point3D point2{};
	point2.setValues(1, 2, 3);

	std::cout << "point 1 and point 2 are" << (point1.isEqual(point2) ? "" : " not") << " equal\n";

	Point3D point3{};
	point3.setValues(3, 4, 5);

	std::cout << "point 1 and point 3 are" << (point1.isEqual(point3) ? "" : " not") << " equal\n";

	return 0;

	return 0;
}



//https://www.learncpp.com/cpp-tutorial/public-and-private-members-and-access-specifiers/
