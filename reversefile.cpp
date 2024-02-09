#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[] ) {
    std::ifstream myfile;
    string file_name;
    string line;

    if (argc != 2) {
        cout << "One command line argument required..." << endl;
        return EXIT_FAILURE;
    }
    file_name = argv[1];
    myfile.open(file_name);

    if (myfile.fail()) {
        cout << "Failed to open " << file_name << endl;
        return EXIT_FAILURE;
    }

    while (std::getline(myfile, line)) {
        cout << line << endl;
    }
    return EXIT_SUCCESS;
}
