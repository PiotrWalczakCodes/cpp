#include <iostream>

using namespace std;

int main(){
    cout << "Enter amount of cents: ";
    int cents{0};
    cin >> cents;

    int dollars{cents / 100};
    cents -= dollars * 100;

    int quarters{cents / 25};
    cents -= quarters * 25;

    int dimes{cents / 10};
    cents -= dimes * 10;

    int nickels{cents / 5};
    cents -= nickels * 5;

    int pennies{cents};

    cout << "======================================"<< endl;
    cout << "Dollars:  " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes:    " << dimes << endl;
    cout << "Nickels:  " << nickels << endl;
    cout << "Pennies:  " << pennies << endl;
    
    return 0;
}