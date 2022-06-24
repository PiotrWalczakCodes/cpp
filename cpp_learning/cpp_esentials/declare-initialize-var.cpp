#include <iostream>

using namespace std;

int globalVar; // global variable (available for every function in program)
               // automatically initialized to 0;

int main(){
    int varOne {0}; //naming style I
    int var_one {0}; //naming style II
    
    // Initialization:
    int age1 = 21; // C-like initialization
    int age2 (21); // constructor initialization
    int age3 {21}; // C++11 list initialization syntax
    return 0;
}