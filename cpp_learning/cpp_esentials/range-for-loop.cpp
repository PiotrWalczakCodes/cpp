#include <iostream>

int main(){
    int numbers[]{1,3,5,7,10,12};
    for (auto i : numbers)
        std::cout << i << std::endl;
    
    int nums[]{1,2,3,4,5,6,7,8,9,10};
    std::cout << "=====================" << std::endl;
    for (auto i : nums)     {
        if (i % 2 == 1)
            std::cout << i << std::endl;
    }
        
    return 0;
}