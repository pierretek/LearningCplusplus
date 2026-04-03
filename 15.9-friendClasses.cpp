//Trying out friend classes

#include <iostream>

class Vector3d; //needed for Point3d

class Point3d {
	private:
	double m_x{};
	double m_y{};
	double m_z{};

	public:
	Point3d(double x, double y, double z)
		: m_x{x}, m_y{y}, m_z{z} {
	}

	void print() const {
		std::cout << "Point(" << m_x << ", " << m_y << ", " << m_z << ")\n";
	}

	//Works because point3d is a friend to vector3d
	//needs forward declaration of Vector3d to work
	void moveByVector(const Vector3d& v);
};


class Vector3d {
	private:
	double m_x{};
	double m_y{};
	double m_z{};

	public:
	Vector3d(double x, double y, double z)
		: m_x{x}, m_y{y}, m_z{z} {
	}

	void print() const {
		std::cout << "Vector(" << m_x << ", " << m_y << ", " << m_z << ")\n";
	}

	//Making point3d a friend so it can access the private variables in this class
	// friend class Point3d;

	//Only making a specfic member function a friend
	friend void Point3d::moveByVector(const Vector3d& v);
};

//Needs to be defined AFTER the full definition of Vector3d to access it's variables
void Point3d::moveByVector(const Vector3d& v) {
	m_x += v.m_x;
	m_y += v.m_y;
	m_z += v.m_z;
}

//testing out the point and vector classes
int main() {
	Point3d p{1.0, 2.0, 3.0};
	Vector3d v{2.0, 2.0, -3.0};

	p.print();
	p.moveByVector(v);
	p.print();

	return 0;
}

//https://www.learncpp.com/cpp-tutorial/friend-classes-and-friend-member-functions/
