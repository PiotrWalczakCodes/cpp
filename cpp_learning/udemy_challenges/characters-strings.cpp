#include <iostream>
#include <string>

using namespace std;

int main(){
    string alphabet{"abcdefghijklmnoprstuwxyz"};
    string key{"zyxwutsrponmlkjihgfedcba"};

    string message{};
    getline(cin, message);

    string encrypted_message{};
    for (auto i : message)  {
        if (i == ' ' || !isalpha(i)) {
            encrypted_message += i;
        } else {
            encrypted_message += key[alphabet.find(tolower(i))];
        }
    }
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << encrypted_message << endl;
    return 0;
}