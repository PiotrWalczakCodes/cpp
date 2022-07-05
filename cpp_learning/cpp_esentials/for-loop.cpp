#include <iostream>

int main(){
    // sum of numbers from 1 to 10
    int sum{};
    for (int i{1}; i <= 10; ++i)    {
        sum += i;
    }
    std::cout << sum << std::endl;
    // 9 factorial
    int factorial{1};
    for (int i{1}; i <= 9; ++i)     {
        factorial *= i;
    }
    std::cout << factorial << std::endl;
    // more advanced for loop
    int sum2{};
    for (int i{1}, j{3}; i <= 12; ++i, ++j)     {
        sum2 += i + j;
    }
    std::cout << sum2 << std::endl;
    return 0;
}