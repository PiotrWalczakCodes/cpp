#include <iostream>

using namespace std;

int main(){
    int array1[20]{0}; // creating array that has 20 elements equal to 0
    
    cout << array1[0] << endl;
    cout << array1[15] << endl;

    array1[15] = 239;

    cout << array1[15] << endl;



    int array2[10][10]{0}; // creating 2d array with 100 elements equal to 0

    cout << array2[2][4] << endl;

    array2[2][4] = 157;

    cout << array2[2][4] << endl;

    return 0;   
}