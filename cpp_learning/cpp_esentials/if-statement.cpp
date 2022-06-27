#include <iostream>

using namespace std;

int main(){
    const int min{10};
    const int max{100};
    
    cout << "Type in random integer (10-100): ";
    int num{0};
    cin >> num;

    if (num >= 10){
        cout << "Your number is greater than 10" << endl;
    }

    if (num <= 100){
        cout << "Your number is lower than 100" << endl;
    }

    if (num >= 10 && num <= 100){
        cout << "Your number is correct!" << endl;
    }

    return 0;
}