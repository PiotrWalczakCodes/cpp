#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter string: ";
    string str{};
    cin >> str;
    
    int i{str.length() - 1};
    do   {
        for (int j{}; j <= i; ++j)  {
            cout << " ";
        }
        
    } while (i != 0);
    return 0;
}