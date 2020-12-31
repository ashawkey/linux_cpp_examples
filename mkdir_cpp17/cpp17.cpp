#include <iostream>
//#include <filesystem>
#include <experimental/filesystem> // for gcc < 8

using namespace std;

int main() {
    std::experimental::filesystem::create_directories("./a/b/c");
    return 0;
}
