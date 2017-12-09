#ifndef FIGURE_HPP
# define FIGURE_HPP

# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define YELLOW				"\x1b[33m"
# define BLUE				"\x1b[34m"
# define MAGENTA			"\x1b[35m"
# define CYAN				"\x1b[36m"
# define BLACK				"\x1b[37m"
# define RESET				"\x1b[0m"

# include <cassert>
# include <fstream>
# include <iostream>
# include <sstream>
# include <streambuf>
# include <cmath>

# include "../headers/Triangle.hpp"
# include "../headers/Point.hpp"

class Figure
{
private:
    std::vector<Triangle *> _triangles;
    Point                   *_start;
    Point                   *_dest;

public:
	Figure();
    Figure(std::vector<Triangle *> triangles, Point *start, Point *dest);
	~Figure();

    std::vector<Triangle *>     getTriangles(void) const;
    Point                       *getStart(void) const;
    Point                       *getDestination(void) const;
    bool                        checkPointer(void);
    float                       getTriangleSideSize(Point const &A, Point const &B);

};

std::ostream&	operator<<(std::ostream& out, const Figure& t);

#endif