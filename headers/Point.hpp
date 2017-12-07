#ifndef POINT_HPP
# define POINT_HPP

# include <cassert>
# include <fstream>
# include <iostream>
# include <sstream>
# include <streambuf>

# include "../headers/parsing.hpp"
# include "../headers/Figure.hpp"

class Point
{
private:
	float x;
	float y;
	float z;

	std::vector<Point *> 	links;

public:
	Point();
	Point(float x, float y, float z);

	void		addLink(Point *link);
	
	float		getX(void) const;
	float		getY(void) const;
	float		getZ(void) const;

	~Point();

};

std::ostream&	operator<<(std::ostream& out, const Point p);

#endif