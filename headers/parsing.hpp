#ifndef PARSE_STL_HPP
# define PARSE_STL_HPP

# include <string>
# include <vector>
# include <cassert>
# include <fstream>
# include <iostream>
# include <sstream>
# include <streambuf>

#include "../headers/Triangle.hpp"

class Figure;
class Triangle;

namespace stl {

	// struct point {
	// 	float x;
	// 	float y;
	// 	float z;

	// 	point() : x(0), y(0), z(0) {}
	// 	point(float xp, float yp, float zp) : x(xp), y(yp), z(zp) {}
	// };

	// struct triangle {
	// 	point normal;
	// 	point v1;
	// 	point v2;
	// 	point v3;
	// 	triangle(point normalp, point v1p, point v2p, point v3p) :
	// 		normal(normalp), v1(v1p), v2(v2p), v3(v3p) {}
	// };

	// std::ostream& operator<<(std::ostream& out, const triangle& t);

	// struct stl_data {
	// 	std::string name;
	// 	std::vector<triangle> triangles;

	// 	stl_data(std::string namep) : name(namep) {}
	// };

	Figure	*parse_stl(const std::string& stl_path);

}

#endif
