#include <iostream>

using namespace std;

int main(){
    int var1{1};
    var1++; // postfix incrementation
    ++var1; // prefix incrementation

    cout << var1 << endl;

    var1--; // postfix decrementation
    --var1; // prefix decrementation

    cout << var1 << endl;

    // differences between prefix & postfix

    int result{0}, counter{10};
    result = ++counter;

    cout << "result: " << result << endl;
    cout << "counter: " << counter << endl;


    result = 0;
    counter = 10;

    result = counter++;
    cout << "result: " << result << endl;
    cout << "counter: " << counter << endl;

    return 0;
}