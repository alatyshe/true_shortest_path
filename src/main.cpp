#include <cassert>
#include <iostream>

#include "../headers/parsing.hpp"
#include "../headers/Figure.hpp"

int main(int argc, char* argv[])
{
	std::string stl_file_name;

	if (argc == 2){
		stl_file_name = argv[1];
	} else if (argc != 2) {
		std::cout << "ERROR" << std::endl;
		return (0);
	}

	auto info = stl::parse_stl(stl_file_name);

	// std::vector<stl::triangle> triangles = info.triangles;

	std::vector<Figure> figures = info;


	// std::cout << "STL HEADER = " << info.name << std::endl;
	std::cout << "# triangles = " << figures.size() << std::endl;


	auto the_iterator = figures.begin();
	while (the_iterator != figures.end()) {
		std::cout << (*the_iterator->getPointers())[1] << std::endl;
		the_iterator++;
	}
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