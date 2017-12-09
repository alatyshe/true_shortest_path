// #include "../headers/parsing.hpp"
#include "../headers/Triangle.hpp"

Triangle::Triangle() { ; }
Triangle::~Triangle() { ; }

Triangle::Triangle(Point *normalp, Point *pointers_arrayp) : 
	normal(normalp),
	pointers_array(pointers_arrayp)
{ ; }


Point 			*Triangle::getNormal(void) const { return this->normal; }
Point 			*Triangle::getPointers(void) const { return this->pointers_array; }

std::ostream&	operator<<(std::ostream& out, const Triangle& t) {
	std::cout << "---- TRIANGLE ----" << std::endl;
	// std::cout << "normal:" << std::endl;
	// std::cout << t.getNormal() << std::endl;

	std::cout << "coords:" << std::endl;
	Point		*array = t.getPointers();
	std::cout << array[0] << std::endl;
	std::cout << array[1] << std::endl;
	std::cout << array[2] << std::endl << std::endl;
	return out;
}

bool 			Triangle::operator==(const Triangle& rhs) {
	// Point					**first_pointers_array;
	// Point					**second_pointers_array;

	// if (this->normal == rhs.getNormal()) {
	// 	first_pointers_array = rhs.getPointers();
	// 	if (first_pointers_array[0] == second_pointers_array[0]
	// 		&& first_pointers_array[1] == second_pointers_array[1]
	// 		&& first_pointers_array[2] == second_pointers_array[2])
	// 			return (true);
	// }
	return false;
}