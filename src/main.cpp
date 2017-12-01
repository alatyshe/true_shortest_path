#include <cassert>
#include <iostream>

#include "../headers/parse_stl.hpp"

int main(int argc, char* argv[]) {
  std::string stl_file_name = "./Box1x1x1.stl";

  if (argc == 2){
    stl_file_name = argv[1];
  } else if (argc != 2) {
    std::cout << "ERROR" << std::endl;
    return (0);
  }

  auto info = stl::parse_stl(stl_file_name);

  std::vector<stl::triangle> triangles = info.triangles;
  std::cout << "STL HEADER = " << info.name << std::endl;
  std::cout << "# triangles = " << triangles.size() << std::endl;
  for (auto t : info.triangles) {
    std::cout << t << std::endl;
  }

}
