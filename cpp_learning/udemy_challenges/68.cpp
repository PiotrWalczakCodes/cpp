#include <iostream>

using namespace std;

int main(){
    int amount {100};
    int number {8};
    double result {0.0};

    result = amount / number;
    cout << result << endl;

    double result2 {0.0};

    result2 = static_cast<double> (amount) / number;
    cout << result2 << endl;

    return 0;
}