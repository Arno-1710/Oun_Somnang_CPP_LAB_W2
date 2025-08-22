#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <sstream>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

std::string normalizeString(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (!std::isspace(c) && !std::ispunct(c)) {
            result += std::tolower(c);
        }
    }
    return result;
}

int main() {
    std::string input;
    
    std::cout << "Enter a number or string: ";
    std::getline(std::cin, input);
    
    // Check if input is a number
    bool isNumber = true;
    for (char c : input) {
        if (!std::isdigit(c) && !std::isspace(c)) {
            isNumber = false;
            break;
        }
    }
    
    if (isNumber) {
        // Remove spaces from number input
        std::string numberStr;
        for (char c : input) {
            if (std::isdigit(c)) {
                numberStr += c;
            }
        }
        
        if (isPalindrome(numberStr)) {
            std::cout << "\"" << input << "\" is a palindrome number!" << std::endl;
        } else {
            std::cout << "\"" << input << "\" is NOT a palindrome number." << std::endl;
        }
    } else {
        // Process string (remove spaces, punctuation, and convert to lowercase)
        std::string processed = normalizeString(input);
        
        if (processed.empty()) {
            std::cout << "Empty input is considered a palindrome." << std::endl;
        } else if (isPalindrome(processed)) {
            std::cout << "\"" << input << "\" is a palindrome string!" << std::endl;
        } else {
            std::cout << "\"" << input << "\" is NOT a palindrome string." << std::endl;
        }
    }
    
    return 0;
}