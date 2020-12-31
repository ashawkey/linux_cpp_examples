#include <iostream> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <string>
#include <cerrno>
#include <cstring>

using namespace std; 

void safe_mkdir(string s) {
    if (mkdir(s.c_str(), 0777) == -1) {
        if (errno != 17) {
            cout << "[Error] safe_mkdir failed: " << strerror(errno) << endl;
        }
    }
}
  
int main() { 
    safe_mkdir("a"); // only support single dir
    //safe_mkdir("a/b"); // failed
} 
