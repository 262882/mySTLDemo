#include <iostream>

int main(int argc, char *argv[] ){  
    // argv is a pointer to a C style array of pointers to character arrays
    // Each character array is null terminated
    char *name = argv[0] + 2;  // Drop the ./ part of the program name
    std::cout<<"You called "<<name<<":"<<std::endl;
    for (int cnt = 1; cnt < argc; cnt++){
        std::cout<<argv[cnt]<<" ";
        std::cout<<"-- Stored at "<<&argv[cnt];
        std::cout<<std::endl;
    }
    return 0;
}