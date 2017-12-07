#ifndef FIGURE_HPP
# define FIGURE_HPP

# include <cassert>
# include <fstream>
# include <iostream>
# include <sstream>
# include <streambuf>

# include "../headers/parsing.hpp"
# include "../headers/Point.hpp"

class Point;

class Figure
{
private:
	// stl::triangle			*triangle;
	Point					*normal;

	Point					*pointers_array;

public:
	Figure();
	Figure(Point *normalp, Point *pointers_arrayp);
	~Figure();
	
	// stl::triangle 			*getTriangel(void) const;
	void					addLink(Figure *link);
	Point 					*getNormal(void) const;
	Point 					*getPointers(void) const;

	// void					print_pointers(void);
	// void					print_normal(void);

};


#endif