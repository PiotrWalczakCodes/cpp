#include <iostream>

using namespace std;

int main(){
    // ------------------CHARACTER TYPES----------------------------------

    char var1 {'a'}; // exactly one byte (8 bits)
    //char16_t var2 {L'a'}; // at least 2 bytes
    //char32_t var3 {L'a'}; // at least 4 bytes
    wchar_t var4 {L'a'}; // can represent largest charecter set

    // cout << var1 << endl;
    // wcout << var2 << endl;
    // wcout << var3 << endl;
    // wcout << var4 << endl;wcout to pring character (not its value - 96)
    cout << "------------CHAR SIZES------------------"<<endl;
    cout << sizeof(var1) << endl;
    cout << sizeof(var4) << endl;
    
    // ------------------INTEGER TYPES-----------------------------------

    short var5 {0}; // at least 2 bytes int (16 bits)
    int var6 {0}; // at least 2 bytes int (16 bits)
    long var7 {0}; // at least 4 bytes int (32 bits)
    long long var8 {0}; // at least 8 bytes (64 bits)

    cout << "-------------INT SIZES------------------"<<endl;
    cout << sizeof(var5) << endl;
    cout << sizeof(var6) << endl;
    cout << sizeof(var7) << endl;
    cout << sizeof(var8) << endl;   

    // ------------------FLOATING-POINT TYPES----------------------------

    float var9 {0.0}; // 7 decimal digits
    double var10 {0.0}; // 15 decimal digits
    long double var11 {0.0}; // 19 decimal digits

    cout << "-------------FLOAT SIZES------------------"<<endl;
    cout << sizeof(var9) << endl;
    cout << sizeof(var10) << endl;
    cout << sizeof(var11) << endl;

    // ------------------BOOLEAN TYPE-----------------------------------

    bool var12 {true}; // usually 1 byte
    cout << "-------------BOOL SIZE------------------"<<endl;
    cout << sizeof(var12) << endl;

    return 0;
}