#include <iostream>

using namespace std;

int main(){
    int var1{2}, var2{3};
    bool result{false};

    cout << boolalpha;

    result = (var1 > var2);
    cout << result << endl;

    result = (var1 >= var2);
    cout << result << endl;

    result = (var1 < var2);
    cout << result << endl;

    result = (var1 <= var2);
    cout << result << endl;
    
    return 0;
}