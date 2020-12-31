#include <dirent.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> listdir(string dir) {
    DIR *dp;
    struct dirent *dirp;
    vector<string> files;

    if ((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return files;
    }


    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);

    return files;
}

int main()
{
    auto files = listdir(".");
    for (int i = 0; i < files.size(); i++) {
        cout << files[i] << endl;
    }
    return 0;
}
