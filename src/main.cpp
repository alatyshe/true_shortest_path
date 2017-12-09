#include <cassert>
#include <iostream>

#include "../headers/parsing.hpp"
#include "../headers/Triangle.hpp"
#include "../headers/Figure.hpp"
#include "../headers/Point.hpp"


int main(int argc, char* argv[])
{
	std::string stl_file_name;

	if (argc == 2){
		stl_file_name = argv[1];
	} else if (argc != 2) {
		std::cout << "ERROR" << std::endl;
		return (0);
	}

	Figure 	*figure = stl::parse_stl(stl_file_name);

	std::vector<Triangle *>	triangles = figure->getTriangles();
	Point 					*start = figure->getStart();
	Point 					*destination = figure->getDestination();

	std::cout << "# triangles = " << triangles.size() << std::endl;
	std::vector<Triangle *>::iterator 	first_iterator = triangles.begin();
	while (first_iterator != triangles.end()) {

		// std::vector<Triangle>::iterator 	second_iterator = triangles.begin();
		// while (second_iterator != triangles.end()) {
		// 	if (second_iterator != first_iterator && (*second_iterator) == (*first_iterator))
		// 		std::cout << "YEAH" << std::endl;
		// 	second_iterator++;
		// }

		// std::cout << "---- TRIANGLE ----" << std::endl;
		// std::cout << YELLOW << "normal:" << RESET << std::endl;
		// std::cout << *((*first_iterator).getNormal()) << std::endl;

		std::cout << CYAN << "coords:" << RESET << std::endl;
		Point		*array = (*first_iterator)->getPointers();
		std::cout << array[0] << std::endl;
		std::cout << array[1] << std::endl;
		std::cout << array[2] << std::endl;

		first_iterator++;
	}

	figure->checkPointer();



	// std::cout << "START POINT" << std::endl;
	// std::cout << (*start) << std::endl;
	// std::cout << "DEST POINT" << std::endl;
	// std::cout << (*destination) << std::endl;

	return (0);
}




// int main(int argc, char* argv[])
// {
// 	std::string stl_file_name;

// 	if (argc == 2){
// 		stl_file_name = argv[1];
// 	} else if (argc != 2) {
// 		std::cout << "ERROR" << std::endl;
// 		return (0);
// 	}

// 	auto info = stl::parse_stl(stl_file_name);

// 	std::vector<stl::triangle> triangles = info.triangles;
// 	std::cout << "STL HEADER = " << info.name << std::endl;
// 	std::cout << "# triangles = " << triangles.size() << std::endl;
// 	for (auto t : info.triangles) {
// 		std::cout << t << std::endl;
// 	}
// }