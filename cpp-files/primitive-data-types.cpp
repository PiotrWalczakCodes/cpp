#include <iostream>

using namespace std;

int main(){
    // character types
    char var1 {'a'}; // exactly one byte (8 bits)
    //char16_t var2 {L'a'}; // at least 2 bytes
    //char32_t var3 {L'a'}; // at least 4 bytes
    wchar_t var4 {L'a'}; // can represent largest charecter set

    cout << var1 << endl;
    // wcout << var2 << endl;
    // wcout << var3 << endl;
    wcout << var4 << endl; // wcout to pring character (not its value - 96)
    return 0;
}