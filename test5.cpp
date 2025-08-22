#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int numbers[SIZE];
    
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        while (!(cin >> numbers[i])) {
            cout << "Invalid input! Please enter an integer: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    
    // Check for duplicates
    bool hasDuplicates = false;
    cout << "\nChecking for duplicates..." << endl;
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (numbers[i] == numbers[j]) {
                hasDuplicates = true;
                cout << "✓ Duplicate found: " << numbers[i] << " (appears multiple times)" << endl;
            }
        }
    }
    
    cout << "\nArray: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    
    if (hasDuplicates) {
        cout << "\nResult: Contains duplicates" << endl;
    } else {
        cout << "\nResult: All values are unique" << endl;
    }
    
    return 0;
}