#ifndef POINT_HPP
# define POINT_HPP

# include <cassert>
# include <fstream>
# include <iostream>
# include <sstream>
# include <streambuf>

class Point
{
private:
	float x;
	float y;
	float z;

public:
	Point();
	Point(float x, float y, float z);

	float		getX(void) const;
	float		getY(void) const;
	float		getZ(void) const;

	bool 		operator==(const Point& rhs);
	
	~Point();

};

std::ostream&	operator<<(std::ostream& out, const Point p);

#endif