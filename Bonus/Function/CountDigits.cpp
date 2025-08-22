#include <iostream>
#include <cmath> // for abs() function
using namespace std;

// Function to count digits in a number
int countDigits(int number) {
    // Handle the special case of 0
    if (number == 0) {
        return 1;
    }
    
    // Remove the negative sign if present
    number = abs(number);
    
    int count = 0;
    
    // Count digits by repeatedly dividing by 10
    while (number > 0) {
        number = number / 10;  // Remove the last digit
        count++;               // Count that digit
    }
    
    return count;
}

// Alternative method using logarithm (mathematical approach)
int countDigitsWithLog(int number) {
    // Handle 0 separately (log10(0) is undefined)
    if (number == 0) {
        return 1;
    }
    
    // Remove negative sign and use logarithm
    number = abs(number);
    return floor(log10(number)) + 1;
}

int main() {
    int number;
    
    cout << " DIGIT COUNTER" << endl;
    cout << "================" << endl;
    
    // Get input from user
    cout << "Enter an integer (positive or negative): ";
    cin >> number;
    
    // Count digits using both methods
    int digitCount = countDigits(number);
    int digitCountLog = countDigitsWithLog(number);
    
    // Show the result
    cout << "\n RESULT:" << endl;
    cout << "----------" << endl;
    cout << "The number " << number << " has " << digitCount << " digit";
    if (digitCount != 1) {
        cout << "s"; // Plural for more than 1 digit
    }
    cout << "!" << endl;
    
    // Show how the counting works
    cout << "\n How it works:" << endl;
    cout << "---------------" << endl;
    
    if (number == 0) {
        cout << "0 is a special number with exactly 1 digit! " << endl;
    } else {
        int temp = abs(number); // Work with positive version
        cout << "Let's count the digits in " << temp << ":" << endl;
        
        int step = 1;
        while (temp > 0) {
            int digit = temp % 10; // Get the last digit
            cout << "Step " << step << ": Found digit " << digit << endl;
            temp = temp / 10;      // Remove the last digit
            step++;
        }
    }
    
    // Show that both methods give the same result
    cout << "\n Both counting methods agree: " << digitCount << " = " << digitCountLog << endl;
    
    // Show some examples
    cout << "\n[ Quick examples ]:" << endl;
    cout << "-----------------" << endl;
    cout << "12345 has " << countDigits(12345) << " digits" << endl;
    cout << "-908 has " << countDigits(-908) << " digits (ignoring the minus sign)" << endl;
    cout << "0 has " << countDigits(0) << " digit" << endl;
    cout << "7 has " << countDigits(7) << " digit" << endl;
    cout << "1000000 has " << countDigits(1000000) << " digits" << endl;
    
    // Let the user try more numbers
    cout << "\n Want to try another number? (y/n): ";
    char choice;
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter another integer: ";
        cin >> number;
        cout << number << " has " << countDigits(number) << " digits!" << endl;
    }
    
    cout << "\nThanks for using the Digit Counter! " << endl;
    
    return 0;
}