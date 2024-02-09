#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main(int argc, char *argv[] ){  

    std::vector<int> inputs;

    for (int cnt = 1; cnt < argc; cnt++){
        int item = atoi(argv[cnt]);  // C String to int
        inputs.push_back(item);
    }
    std::sort(inputs.begin(), inputs.end());

    cout<<"Sorted output: "<<endl;
    for (size_t cnt = 0; cnt < inputs.size(); cnt++){  // .size() returns a size_t (unsigned number) 
        cout<<inputs[cnt]<<" ";
        cout<<endl;
    }
    return 0;
}