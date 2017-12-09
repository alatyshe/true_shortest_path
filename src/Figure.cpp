#include "../headers/Figure.hpp"

Figure::Figure() { ; }
Figure::~Figure() { ; }

Figure::Figure(std::vector<Triangle> triangles, Point *start, Point *dest) :
    _triangles(triangles),
    _start(start),
    _dest(dest)
{ ; }

std::vector<Triangle>       Figure::getTriangles(void) const { return (this->_triangles); };
Point                       *Figure::getStart(void) const { return (this->_start); };
Point                       *Figure::getDestination(void) const { return (this->_dest); };

float                       Figure::getTriangleSideSize(Point const &A, Point const &B) {
    
}



bool                        Figure::checkPointer(void) const {
	Point 					*start = this->_start;
	Point 					*destination = this->_dest;

	std::vector<Triangle>::const_iterator i = this->_triangles.begin();
	while (i != this->_triangles.end()) {
        // if ()
        //     return (true);
		Point		*array = i->getPointers();

		std::cout << array[0].getX() << std::endl;
        std::cout << array[0].getY() << std::endl;
        std::cout << array[0].getZ() << std::endl;

        std::cout << array[1].getX() << std::endl;
        std::cout << array[1].getY() << std::endl;
        std::cout << array[1].getZ() << std::endl;

        std::cout << array[2].getX() << std::endl;
        std::cout << array[2].getY() << std::endl;
        std::cout << array[2].getZ() << std::endl;

		i++;
	}
    return (false);
};

std::ostream&	operator<<(std::ostream& out, const Figure& t)
{
	out << "---- Figure ----" << std::endl;
	return out;
}