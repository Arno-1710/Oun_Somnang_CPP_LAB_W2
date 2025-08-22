#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = {45, 12, 89, 3, 67, 23, 91, 18};
    int largest = INT_MIN; // Smallest possible integer
    int smallest = INT_MAX; // Largest possible integer
    
    // Find largest and smallest
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    
    cout << "\n[Largest element]: " << largest << endl;
    cout << "[Smallest element]: " << smallest << endl;
    
    return 0;
}