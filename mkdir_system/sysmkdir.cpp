#include <iostream> 

using namespace std; 

void safe_mkdir(string s) {
    string cmd = "mkdir -p " + s;
    system(cmd.c_str());
}
  
int main() { 
    safe_mkdir("a/b");
} 
