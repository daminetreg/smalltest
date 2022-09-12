#include <iostream>
#include <boost/filesystem.hpp>
void banana() {
  std::cout << "boom" << boost::filesystem::current_path() << std::endl;
}
