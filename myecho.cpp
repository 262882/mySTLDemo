#include <iostream>
using std::cout;  // std is the only builtin namespace
using std::endl;  // Other namespaces are self or external library (boost)

int main(int argc, char *argv[] ) {
    // argv is a pointer to a C style array of pointers to character arrays
    // Each character array is null terminated
    char *name = argv[0] + 2;  // Drop the ./ part of the program name
    cout << "You called " << name << ":" << endl;
    for (int cnt = 1; cnt < argc; cnt++) {
        cout << argv[cnt] << " ";
        cout << "-- Stored at " << &argv[cnt];
        cout << endl;
    }
    return 0;
}
