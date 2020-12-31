#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main() {
    ifstream i("test.json");
    json j;
    i >> j;
    // print
    cout << j;
    // access
    //for (json::iterator it = j.begin(); it != j.end(); ++it) {
    //    cout << it.key() << ": " << it.value() << endl; 
    //}
    for (auto& ele : j.items()) {
        cout << ele.key() << ": " << ele.value() << endl; 
    }
}
