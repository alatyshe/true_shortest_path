# include "../headers/parsing.hpp"
# include "../headers/Point.hpp"

Point::Point() : x(0), y(0), z(0) { ; }
Point::~Point() { ; }

Point::Point(float xp, float yp, float zp) : x(xp), y(yp), z(zp)
{ ; }

float				Point::getX(void) const { return this->x; }
float				Point::getY(void) const { return this->y; }
float				Point::getZ(void) const { return this->x; }

bool 				Point::operator==(const Point& rhs) {
	if (this->x == rhs.getX() && this->y == rhs.getY() && this->x == rhs.getZ())
		return (true);
	return (false);
}

std::ostream&	operator<<(std::ostream& out, const Point p)
{
	out << "(" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")";
	return out;
}