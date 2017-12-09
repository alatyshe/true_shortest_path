#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

# include <cassert>
# include <fstream>
# include <iostream>
# include <sstream>
# include <streambuf>

# include "../headers/parsing.hpp"
# include "../headers/Point.hpp"

class Point;

class Triangle
{
private:
	Point					*normal;
	Point					*pointers_array;

public:
	Triangle();
	Triangle(Point *normalp, Point *pointers_arrayp);
	~Triangle();
	
	void					addLink(Triangle *link);
	Point 					*getNormal(void) const;
	Point 					*getPointers(void) const;
	Point                   *checkPointer(void) const;

	bool 					operator==(const Triangle& rhs);

};

#endif