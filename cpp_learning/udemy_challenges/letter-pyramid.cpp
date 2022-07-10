#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    cout << "Enter string: ";
    string str{};
    cin >> str;
    
    string reversed{};
    for (int i{1}; i <= str.length(); ++i)  {
        reversed = "";
        for (int j{1}; j <= (str.length() - i); ++j)    {
            cout << " ";
        }
        for (int n{1}; n <= (str.length() - (str.length() - i)); ++n)  {
            cout << str[n-1];
            if (n != 1) {
                reversed += str[n-2];
            }
        }

        reverse(reversed.begin(), reversed.end());
        cout << reversed;
        cout << "\n";
    }
    return 0;
}