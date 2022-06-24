#include <iostream>
#include <vector> // !necessary to use vectors in C++

using namespace std;

int main(){
    vector <int> vector1 (120, 0); 
    // creating vector with 120 elements equal to 0

    cout << vector1.at(24) << endl;
    
    vector1.push_back(120);
    vector1.at(24) = 157;
    
    cout << vector1.at(24) << endl;
    cout << vector1.at(120) << endl;
    

    vector<vector<int>> vector2(10, vector<int> (10, 0));

    cout << vector2.at(4).at(4) << endl;
    return 0;
}
