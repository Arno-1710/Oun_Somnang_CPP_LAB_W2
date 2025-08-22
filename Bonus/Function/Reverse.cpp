#include <iostream>
#include <string>
using namespace std;

// Recursive function to reverse a string
string reverseString(const string& str) {
    // Base case: empty string or single character
    if (str.length() <= 1) {
        return str;
    }
    
    // Recursive case: take last character + reverse of the rest
    return string(1, str.back()) + reverseString(str.substr(0, str.length() - 1));
}

// Alternative version using indices (more efficient)
string reverseStringIndex(const string& str, int start = 0) {
    // Base case: empty string or reached the end
    if (start >= str.length()) {
        return "";
    }
    
    // Recursive case: reverse the rest, then add current character
    return reverseStringIndex(str, start + 1) + str[start];
}

int main() {
    // Test cases
    cout << "Reverse of \"hello\":  \"" << reverseString("hello") << "\"" << endl;
    cout << "Reverse of \"abc de\": \"" << reverseString("abc de") << "\"" << endl;
    cout << "Reverse of \"\":        \"" << reverseString("") << "\"" << endl;
    
    // Additional test cases
    cout << "Reverse of \"a\":       \"" << reverseString("a") << "\"" << endl;
    cout << "Reverse of \"racecar\": \"" << reverseString("racecar") << "\"" << endl;
    
    // Test with index version
    cout << "\nUsing index version:" << endl;
    cout << "Reverse of \"hello\":  \"" << reverseStringIndex("hello") << "\"" << endl;
    cout << "Reverse of \"abc de\": \"" << reverseStringIndex("abc de") << "\"" << endl;
    
    return 0;
}