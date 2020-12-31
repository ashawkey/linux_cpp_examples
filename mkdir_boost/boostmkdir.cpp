#include <iostream>
#include <boost/filesystem.hpp>

int main() {
    boost::filesystem::create_directory("a"); // can only make a single dir
}
