#include <fstream>
#include <iostream>
int main(){
  std::string file;
  std::string nFile;

  std::cout << "Enter the file name: ";
  std::cin >> file;

  std::cout << "Enter the new file name: ";
  std::cin >> nFile;

  std::ifstream  src(file, std::ios::binary);
  std::ofstream  dst(nFile,   std::ios::binary);
  dst << src.rdbuf();
}
