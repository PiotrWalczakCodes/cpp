#include <iostream>

int main(){
    std::cout << "Enter grade that you want to check: ";
    char grade{};
    std::cin >> grade;
    switch(grade){
        case 'a':
        case 'A':
            std::cout << "You need at least 90%\n"; 
            break;
        case 'b':
        case 'B':
            std::cout << "You need 75-89%\n";
            break; 
        case 'c':
        case 'C':
            std::cout << "You need 50-74%\n";
            break;
        case 'd':
        case 'D':
            std::cout << "You need 30-49%\n";
            break;
        case 'f':
        case 'F':
            std::cout << "You need 0-29% ;)\n";
            break;
        default:
            std::cout << "Wrong input data!\n";
    }
        
    return 0;
}