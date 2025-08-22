#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    
    cout << "Enter " << SIZE << " integers:" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        
        // Input validation loop
        while (!(cin >> numbers[i])) {
            cout << "Invalid input! Please enter an integer: ";
            cin.clear(); // Clear error flag
            cin.ignore(1000, '\n'); // Discard invalid input
        }
    }
    
    cout << "\nYou entered the following numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}