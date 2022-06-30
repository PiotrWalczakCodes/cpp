#include <iostream>

int main(){
    std::cout << "Type number(0-100): ";
    int num{0};
    std::cin >> num;

    if (num <= 100)
        if (num >= 0)
            std::cout << "Your number is correct!\n";
        else
            std::cout << "Your number is incorrect!\n"; 
    else
        std::cout << "Your number is incorrect!\n";
    return 0;
}