#include <iostream>

using namespace std;

int main(){
    int var1{23}, var2{27};

    cout << "Before assignment:" << endl;
    cout << var1 << endl;
    cout << var2 << endl;

    var1 = var2; // assigning var2 to var1

    cout << "After assignment:" << endl;
    cout << var1 << endl;
    cout << var2 << endl; 

    //assigning multiple variables in one statement

    var1 = var2 = 150; // assigning 150 to var1 and var2

    cout << "After multiple assigment:" << endl;
    cout << var1 << endl;
    cout << var2 << endl; 
    
    return 0;
}