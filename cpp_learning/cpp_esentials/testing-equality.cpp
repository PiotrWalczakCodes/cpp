#include <iostream>

using namespace std;

int main(){
    int var1{2}, var2{2};

    bool result{false};

    result = (var1 == var2);
    cout << result << endl;

    result = (var1 != var2);
    cout << result << endl;

    // to change bool style do:
    cout << boolalpha;

    result = (var1 == var2);
    cout << result << endl;

    result = (var1 != var2);
    cout << result << endl;

    // to change bool style again do:
    cout << noboolalpha;
    
    result = (var1 == var2);
    cout << result << endl;

    result = (var1 != var2);
    cout << result << endl;

    return 0;
}