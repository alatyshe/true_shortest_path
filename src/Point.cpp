# include "../headers/parsing.hpp"
# include "../headers/Point.hpp"

Point::Point() : _x(0), _y(0), _z(0) { ; }
Point::~Point() { ; }

Point::Point(float x, float y, float z) : _x(x), _y(y), _z(z)
{ ; }

float				Point::getX(void) const { return this->_x; }
float				Point::getY(void) const { return this->_y; }
float				Point::getZ(void) const { return this->_z; }

bool 				Point::operator==(const Point& rhs) {
	if (this->_x == rhs.getX() && this->_y == rhs.getY() && this->_x == rhs.getZ())
		return (true);
	return (false);
}

std::ostream&	operator<<(std::ostream& out, const Point p)
{
	out << "(X : " << p.getX() << ", Y : " << p.getY() << ", Z : " << p.getZ() << ")";
	return out;
}