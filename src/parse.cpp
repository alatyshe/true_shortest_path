#include "../headers/parsing.hpp"
#include "../headers/Figure.hpp"
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

	std::vector<Figure> parse_stl(const std::string& stl_path)
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

		// std::string h(header_info);		// преобразует char массив в строку


		unsigned int* r = (unsigned int*) n_triangles;	// интересный способ кастования
		unsigned int num_triangles = *r;

		std::vector<Figure> 	figures;

		for (unsigned int i = 0; i < num_triangles; i++) // чтение файла
		{
			Point 		*points[3];
			Point		*normal;

			normal 		= parse_point(stl_file);
			points[0] 	= parse_point(stl_file);
			points[1] 	= parse_point(stl_file);
			points[2] 	= parse_point(stl_file);

			std::cout << *normal << std::endl;
			figures.push_back(Figure(normal, *points));

			char dummy[2];
			stl_file.read(dummy, 2);
		}
		return figures;
	}
}