#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> numbers;
    std::unordered_set<int> seen;
    std::vector<int> uniqueNumbers;
    
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }
    
    // Remove duplicates using unordered_set 
    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            uniqueNumbers.push_back(num);
        }
    }
    
    std::cout << "Unique elements: ";
    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}