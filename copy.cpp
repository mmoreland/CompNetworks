#include <fstream>

int main(){
    std::ifstream  src("test.txt", std::ios::binary);
    std::ofstream  dst("next.txt",   std::ios::binary);
    dst << src.rdbuf();
}
