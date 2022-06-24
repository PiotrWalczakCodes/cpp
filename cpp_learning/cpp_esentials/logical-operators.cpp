#include <iostream>

using namespace std;

int main(){
    bool a{false}, b{false};
    bool result{false};

    cout << boolalpha;

    // I - not
    cout << "--------------- NOT --------------" << endl;
    a = false;
    result = !a;
    cout << a << "| " << result << endl;

    a = true;
    result = !a;
    cout << a << " | " << result << endl;
    // II - and
    cout << "--------------- AND --------------" << endl;
    a = true;
    b = true;
    result = (a && b);
    cout << a << "  " << b << "  | " << result << endl;

    a = true;
    b = false;
    result = (a && b);
    cout << a << "  " << b << " | " << result << endl;

    a = false;
    b = true;
    result = (a && b);
    cout << a << " " << b << "  | " << result << endl;

    a = false;
    b = false;
    result = (a && b);
    cout << a << " " << b << " | " << result << endl;

    cout << "--------------- OR --------------" << endl;
    a = true;
    b = true;
    result = (a || b);
    cout << a << "  " << b << "  | " << result << endl;

    a = true;
    b = false;
    result = (a || b);
    cout << a << "  " << b << " | " << result << endl;

    a = false;
    b = true;
    result = (a || b);
    cout << a << " " << b << "  | " << result << endl;

    a = false;
    b = false;
    result = (a || b);
    cout << a << " " << b << " | " << result << endl;

    
    return 0;
}