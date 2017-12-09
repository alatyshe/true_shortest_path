#include "../headers/Figure.hpp"
#include "../headers/parsing.hpp"
#include "../headers/Point.hpp"

class Point;

namespace stl {

	float			parse_float(std::ifstream& s)
	{
		char f_buf[sizeof(float)];
		s.read(f_buf, 4);
		float* fptr = (float*) f_buf;
		return *fptr;
	}

	Point 			*parse_point(std::ifstream& s)
	{
		float x = parse_float(s);
		float y = parse_float(s);
		float z = parse_float(s);
		return (new Point(x, y, z));
	}

	Point			*parse_start_dest(void)
	{
		std::string line;

		std::cout << "set x cord : ";
		std::getline (std::cin, line);
		float x = std::stod(line.c_str());
		std::cout << x << std::endl;

		std::cout << "set y cord : ";
		std::getline (std::cin, line);
		float y = std::stod(line.c_str());
		std::cout << y << std::endl;

		std::cout << "set z cord : ";
		std::getline (std::cin, line);
		float z = std::stod(line.c_str());
		std::cout << z << std::endl;

		Point *dest = new Point(x, y, z);
		return (dest);
	}

	Figure	*parse_stl(const std::string& stl_path)
	{
		std::ifstream stl_file(stl_path.c_str(), std::ios::in | std::ios::binary);
		if (!stl_file)
		{
			std::cout << "ERROR: COULD NOT READ FILE" << std::endl;
			assert(false);
		}

		char header_info[80] = "";		// создает заголовок
		char n_triangles[4];			// создает количество треугольников

		stl_file.read(header_info, 80);	// читает заголовок
		stl_file.read(n_triangles, 4);	// читает количество треугольников

		unsigned int* r = (unsigned int*) n_triangles;	// интересный способ кастования
		unsigned int num_triangles = *r;

		std::vector<Triangle *> 	figures;

		// for (unsigned int i = 0; i < num_triangles; i++) // чтение файла
		// {
		// 	Point 		*points[3];
		// 	Point		*normal;

		// 	normal 		= parse_point(stl_file);
		// 	points[0] 	= parse_point(stl_file);
		// 	points[1] 	= parse_point(stl_file);
		// 	points[2] 	= parse_point(stl_file);

		// 	// std::cout << *normal << std::endl;
		// 	figures.push_back(Triangle(normal, *points));

		// 	char dummy[2];
		// 	stl_file.read(dummy, 2);
		// }

		
		Point	*points[3];
		points[0] = new Point(0.0, 0.0, 0.0);
		std::cout << *points[0] << std::endl;
		points[1] = new Point(10.0, 0.0, 0.0);
		std::cout << *points[1] << std::endl;
		points[2] = new Point(0.0, 12.0, 0.0);
		std::cout << *points[2] << std::endl;
		Point	*normal = new Point(0, 0, 0);

		figures.push_back(new Triangle(normal, *points));

		std::cout << GREEN << "Please enter start point" << std::endl << RESET;
		Point *start = parse_start_dest();

		

		// std::cout << GREEN << "Please enter dest point" << std::endl << RESET;
		// Point *dest = parse_start_dest();


		// return (new Figure(figures, start, dest));

		return (new Figure(figures, start, start));
	}
}