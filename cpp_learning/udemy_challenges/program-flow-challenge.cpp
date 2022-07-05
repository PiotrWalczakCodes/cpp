#include <iostream>
#include <vector>

using namespace std;

int main(){
    bool quit{false};
    char action{};
    int num_to_add{}, sum{}, smallest_num{}, largest_num{};
    float avg{};
    vector <int> collection{};
    do {
        cout << "    MENU" << endl;
        cout << "=============" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nType in your choice: ";
        cin >> action;

        switch (action) {
            // DISPLAYING COLLECTION
            case 'P':
            case 'p':
                cout << "\n\n\n\n\n";
                for (auto i : collection)
                    cout << i << ", ";
                cout << "\n\n";
                break;
            // ADDING INT TO A COLLECTION
            case 'A':
            case 'a':
                cout << "\n\n\n\n\n";
                cout << "Type in a to add: ";
                cin >> num_to_add;             
                collection.push_back(num_to_add);
                cout << num_to_add << " added\n\n";
                break;
            // CALCULATING & PRINTING MEAN OF NUMBERS IN COLLECTION
            case 'M':
            case 'm':
                cout << "\n\n\n\n\n";
                for (auto i : collection)
                    sum += i;
                avg = static_cast<double> (sum) / collection.size();
                cout << "Mean of all numbers is: " << avg;
                cout << "\n\n";
                break;
            // FINDING & PRINTING THE SMALLEST NUMBER IN COLLECTION
            case 'S':
            case 's':
                smallest_num = collection.at(0);
                for (int i{1}; i < collection.size(); ++i)   {
                    if (collection.at(i) < collection.at(i - 1))
                        smallest_num = collection.at(i);
                }
                cout << "\n\n\n\n\n";
                cout << "The smallest number in collection is: " << smallest_num;
                cout << "\n\n";
                break;
            // FINDING & PRINTING THE LARGEST NUMBER IN COLLECTION
            case 'L':
            case 'l':
                largest_num = collection.at(0);
                for (int i{1}; i < collection.size(); ++i)    {
                    if (collection.at(i) > collection.at(i - 1))
                        largest_num = collection.at(i);
                }
                cout << "\n\n\n\n\n";
                cout << "The largest number in collection is: " << largest_num;
                cout << "\n\n";
                break;
            // CLOSING PROGRAM
            case 'Q':
            case 'q':
                quit = true;
                cout << "\n\n\n\n\n";
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Unknown selection, please try again\n\n";
        }   

    } while (!quit);
    
    return 0;
}