#include <iostream>

int main(){
    std::cout << "How many times should the program write 'Hello there!': ";
    int amount_of_repeats{};
    std::cin >> amount_of_repeats;
    int i{};
    while (i < amount_of_repeats)   {
        std::cout << (i + 1) << ". Hello there!" << std::endl; 
        ++i;
    } 
    return 0;
}