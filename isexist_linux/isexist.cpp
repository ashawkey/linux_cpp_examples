#include <iostream> 
#include <sys/stat.h> 
#include <unistd.h>
#include <string>

using namespace std; 

inline bool isexist (const string& path) {
    struct stat buffer;
    return (stat(path.c_str(), &buffer) == 0);
}

int main() { 
    string s;
    while (cin >> s) {
        cout << isexist(s) << endl;
    }
    return 0;
} 
