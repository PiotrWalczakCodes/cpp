#include <iostream>

using namespace std;

int main(){
    int var1{6}, var2{3};

    int addition{var1 + var2}; // "+" - addition operator
    int subtraction{var1 - var2}; // "-" - subtraction operator
    int multiplication{var1 * var2}; // "*" - multiplication operator
    int division{var1 / var2}; // "/" - division operator 
    int modulo{var1 % var2}; // "%" - modulo operator   
    
    cout << addition << endl;
    cout << subtraction << endl;
    cout << multiplication << endl;
    cout << division << endl;
    cout << modulo << endl;
 
    return 0;
}