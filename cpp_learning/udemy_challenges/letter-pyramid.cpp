#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter string: ";
    string str{};
    cin >> str;
    
    for (int i{1}; i <= str.length(); ++i)  {
        for (int j{1}; j <= (str.length() - i); ++j)    {
            cout << " ";
        }
        for (int n{1}; n <= (str.length() - (str.length() - i)); ++n)  {
            cout << str[n-1];
        }
        cout << "\n";
    }
    return 0;
}