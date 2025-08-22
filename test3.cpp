#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Array with predefined float values
    float numbers[5] = {3.5f, 8.2f, 1.7f, 9.4f, 5.1f};
    float sum = 0.0f;
    
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
        sum += numbers[i];
    }
    
    float average = sum / 5;
    
    cout << fixed << setprecision(2);
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}