// #include "../headers/parsing.hpp"
#include "../headers/Figure.hpp"

Figure::Figure() { ; }
Figure::~Figure() { ; }

Figure::Figure(Point *normalp, Point *pointers_arrayp) : 
	normal(normalp),
	pointers_array(pointers_arrayp)
{ ; }


Point 			*Figure::getNormal(void) const { return this->normal; }
Point 			*Figure::getPointers(void) const { return this->pointers_array; }


std::ostream&	operator<<(std::ostream& out, const Figure& t)
{
	Point		*array = t.getPointers();
	out << "---- TRIANGLE ----" << std::endl;
	out << t.getNormal() << std::endl;
	out << array[0] << std::endl;
	out << array[1] << std::endl;
	out << array[2] << std::endl;
	return out;
}