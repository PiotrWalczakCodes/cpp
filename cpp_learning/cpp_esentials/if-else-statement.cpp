#include <iostream>

using namespace std;

int main(){
    cout << "Type your exam percentage: ";
    int percent{0};
    cin >> percent;

    cout << "You got: ";
    if (percent > 90)
        cout << "A"<< endl;
    else if (percent > 75)
        cout << "B" << endl;
    else if (percent > 60)
        cout << "C" << endl;
    else if (percent > 50)
        cout << "D" << endl;
    else
        cout << "You didn't pass :(" << endl;
    return 0;
}