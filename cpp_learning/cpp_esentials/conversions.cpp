#include <iostream>

using namespace std;

int main(){
    int var1{3}, var2{2};
    float var3{var1 / var2};
    cout << var3 << endl;
    // result is 1, bcs of var1 and var2 int types
    // to get accurate result type conversion is needed

    var3 = static_cast<double> (var1) / var2;

    cout << var3 << endl;

    return 0;
}