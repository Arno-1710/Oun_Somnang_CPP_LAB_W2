#include <iostream>
using namespace std;

// Simple version using a loop
long long calculatePower(int base, int exponent) {
    // Anything raised to power 0 is 1
    if (exponent == 0) {
        return 1;
    }
    
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }
    return result;
}

// Recursive version (calls itself)
long long calculatePowerRecursive(int base, int exponent) {
    // Base case: anything to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: base * base^(exponent-1)
    return base * calculatePowerRecursive(base, exponent - 1);
}

int main() {
    int base, exponent;
    
    cout << "🔢 ===[POWER CALCULATOR]===" << endl;
    
    
    // Get input from user
    cout << "Enter the base number: ";
    cin >> base;
    
    cout << "Enter the exponent (must be 0 or positive): ";
    cin >> exponent;
    
    // Check if exponent is valid
    if (exponent < 0) {
        cout << " Sorry! This calculator only works with positive exponents." << endl;
        return 1;
    }
    
    // Calculate using both methods
    long long result1 = calculatePower(base, exponent);
    long long result2 = calculatePowerRecursive(base, exponent);
    
    // Show the calculation
    cout << "\n===[RESULTS]===" << endl;
    cout << "-----------" << endl;
    cout << base << " raised to the power of " << exponent << " = " << result1 << endl;
    
    // Show how the calculation works
    cout << "\n How it works:" << endl;
    cout << "---------------" << endl;
    if (exponent == 0) {
        cout << "Any number to the power of 0 is always 1! " << endl;
    } else {
        cout << base;
        for (int i = 1; i < exponent; i++) {
            cout << " × " << base;
        }
        cout << " = " << result1 << endl;
    }
    
    // Show that both methods give the same result
    cout << "\n✅ Both methods agree: " << result1 << " = " << result2 << endl;
    
    // Show some examples
    cout << "\n Quick examples:" << endl;
    cout << "-----------------" << endl;
    cout << "2⁵ = " << calculatePower(2, 5) << " (2×2×2×2×2)" << endl;
    cout << "7⁰ = " << calculatePower(7, 0) << " (anything to power 0 is 1)" << endl;
    cout << "3¹ = " << calculatePower(3, 1) << " (any number to power 1 is itself)" << endl;
    
    return 0;
}