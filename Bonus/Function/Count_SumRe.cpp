#include <iostream>
using namespace std;

// Recursive function that prints countdown and returns sum
int countdownAndSum(int n) {
    // Base case: if n is 0 or negative, we're done!
    if (n <= 0) {
        return 0;
    }
    
    // Print the current number
    cout << n << " ";
    
    // Recursive case: call the function with n-1 and add current number to the result
    int remainingSum = countdownAndSum(n - 1);
    return n + remainingSum;
}

// Helper function to make the output nicer
void runCountdown(int n) {
    cout << "Counting down from " << n << ": ";
    int sum = countdownAndSum(n);
    cout << "Sum = " << sum << endl;
}

int main() {
    int n;
    
    cout << " [COUNTDOWN AND SUM CALCULATOR]" << endl;
    cout << "===============================" << endl;
    
    // Get input from user
    cout << "Enter a positive integer: ";
    cin >> n;
    
    // Check if input is valid
    if (n <= 0) {
        cout << "Please enter a positive number greater than 0!" << endl;
        cout << "Returning 0 as specified." << endl;
        return 0;
    }
    
    cout << "\n [COUNTDOWN PROCESS]:" << endl;
    cout << "-------------------" << endl;
    
    // Run the countdown and get the sum
    cout << "Counting down from " << n << ": ";
    int totalSum = countdownAndSum(n);
    cout << "\nTotal sum = " << totalSum << endl;
    
    // Show how the calculation works
    cout << "\n [How the sum is calculated]:" << endl;
    cout << "---------------------------" << endl;
    cout << n;
    for (int i = n - 1; i >= 1; i--) {
        cout << " + " << i;
    }
    cout << " = " << totalSum << endl;
    
    // Show the mathematical formula
    cout << "\n [Mathematical formula]: n(n+1)/2" << endl;
    cout << "For n = " << n << ": " << n << "×" << n+1 << "/2 = " << (n * (n + 1)) / 2 << endl;
    
    // Show some examples
    cout << "\n Quick examples:" << endl;
    cout << "-----------------" << endl;
    
    runCountdown(5);
    runCountdown(3);
    runCountdown(1);
    
    // Show what happens with invalid input
    cout << "\n  [Edge case examples]:" << endl;
    cout << "---------------------" << endl;
    cout << "n = 0: ";
    cout << "Returns " << countdownAndSum(0) << " (prints nothing)" << endl;
    
    cout << "n = -5: ";
    cout << "Returns " << countdownAndSum(-5) << " (prints nothing)" << endl;
    
    // Let the user try another number
    cout << "\nWant to try another number? (y/n): ";
    char choice;
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter another positive integer: ";
        cin >> n;
        if (n > 0) {
            cout << "Counting down from " << n << ": ";
            int newSum = countdownAndSum(n);
            cout << "\nSum = " << newSum << endl;
        } else {
            cout << "Invalid input! Returning 0." << endl;
        }
    }
    
    cout << "\nThanks for counting with me! " << endl;
    
    return 0;
}