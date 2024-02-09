#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[] ){  

    string target;
    string filter = argv[1];
    int status = EXIT_FAILURE;
    cout << "Found matches for: " << filter << endl;

    while (std::getline(std::cin, target)){
        if (target.find(filter) != string::npos){
            status = 0;
            cout << target << endl;
        }           
    }
    if (status){
        cout << "None" << endl;
        return EXIT_FAILURE;  // Only portable way to signal failure
    }
    return EXIT_SUCCESS;  // Return 0 or EXIT_SUCESS signals success
}