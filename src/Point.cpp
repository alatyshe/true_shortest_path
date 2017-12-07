# include "../headers/parsing.hpp"
# include "../headers/Point.hpp"

Point::Point() : x(0), y(0), z(0) { ; }
Point::~Point() { ; }

Point::Point(float xp, float yp, float zp) : x(xp), y(yp), z(zp)
{ ; }


void				Point::addLink(Point *link) {
	this->links.push_back(link);
}

float				Point::getX(void) const { return this->x; }
float				Point::getY(void) const { return this->y; }
float				Point::getZ(void) const { return this->x; }

std::ostream&	operator<<(std::ostream& out, const Point p)
{
	out << "(" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")" << std::endl;
	return out;
}