#include <fstream>
#include <iostream>
#include <vector>
#include "utilities/reversefile_utilities.h"
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[] ) {
    std::ifstream myfile;
    string file_name;
    string in_line;

    if (argc != 2) {
        MyNamespace::print("One command line argument required...");
        return EXIT_FAILURE;
    }
    file_name = argv[1];
    myfile.open(file_name);

    if (myfile.fail()) {
        cout << "Failed to open " << file_name << endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> page;
    while (std::getline(myfile, in_line)) {
        page.push_back(in_line);
    }
    for (size_t cnt; cnt < page.size(); cnt++) {
        cout << page[page.size()-cnt] << endl;
    }
    return EXIT_SUCCESS;
}
