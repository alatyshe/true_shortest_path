#include "../headers/Figure.hpp"

Figure::Figure() { ; }
Figure::~Figure() { ; }

Figure::Figure(std::vector<Triangle *> triangles, Point *start, Point *dest) :
    _triangles(triangles),
    _start(start),
    _dest(dest)
{ ; }

std::vector<Triangle *>     Figure::getTriangles(void) const { return (this->_triangles); };
Point                       *Figure::getStart(void) const { return (this->_start); };
Point                       *Figure::getDestination(void) const { return (this->_dest); };

float                       Figure::getTriangleSideSize(Point const &A, Point const &B) {
    float                   res;
    float                   summ;

    summ = pow(A.getX() - B.getX(), 2) + pow(A.getY() - B.getY(), 2) + pow(A.getZ() - B.getZ(), 2);
    res = pow(summ, 1/2);
    return (res);
}



bool                        Figure::checkPointer(void) {
	Point 					*start = this->_start;
	Point 					*destination = this->_dest;

	std::vector<Triangle *>::const_iterator i = this->_triangles.begin();
	while (i != this->_triangles.end()) {
		// Point		*array = i->getPointers();

        // double      AB1 = this->getTriangleSideSize(array[0], *(this->_start));
        // double      BC1 = this->getTriangleSideSize(array[1], *(this->_start));
        // double      CD1 = this->getTriangleSideSize(array[1], array[0]);
        // double      P1 = (AB1 + BC1 + CD1) / 2;
        // double      S1 = pow(((P1 - AB1) * (P1 - BC1) * (P1 - CD1) * P1), 1/2);

        // double      AB2 = this->getTriangleSideSize(array[0], *(this->_start));
        // double      BC2 = this->getTriangleSideSize(array[1], *(this->_start));
        // double      CD2 = this->getTriangleSideSize(array[1], array[0]);
        // double      P2 = (AB2 + BC2 + CD2) / 2;
        // double      S2 = pow(((P2 - AB2) * (P2 - BC2) * (P2 - CD2) * P2), 1/2);

        // double      AB3 = this->getTriangleSideSize(array[0], *(this->_start));
        // double      BC3 = this->getTriangleSideSize(array[1], *(this->_start));
        // double      CD3 = this->getTriangleSideSize(array[1], array[0]);
        // double      P3 = (AB3 + BC3 + CD3) / 2;
        // double      S3 = pow(((P3 - AB3) * (P3 - BC3) * (P3 - CD3) * P3), 1/2);

        // double      ABF = this->getTriangleSideSize(array[0], array[2]);
        // double      BCF = this->getTriangleSideSize(array[1], array[2]);
        // double      CDF = this->getTriangleSideSize(array[1], array[0]);
        // double      PF = (ABF + BCF + CDF) / 2;
        // double      SF = pow(((PF - ABF) * (PF - BCF) * (PF - CDF) * PF), 1/2);

        // if (S1 + S2 + S3 == SF)
        //     std::cout << "YES I FIND";
            // return (true);
		i++;
	}
    return (false);
};

std::ostream&	operator<<(std::ostream& out, const Figure& t)
{
	out << "---- Figure ----" << std::endl;
	return out;
}