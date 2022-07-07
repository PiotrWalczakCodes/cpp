#include <iostream>

int main(){
    int num{};
    do {
        std::cout << "Type in number '21': ";
        std::cin >> num;
    } while (num != 21);
    std::cout << "That's great!" << std::endl;
    return 0;
}