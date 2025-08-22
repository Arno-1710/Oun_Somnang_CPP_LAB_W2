#include <iostream>
#include <vector>
#include <set>
#include <functional>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter n: ";
    while (!(std::cin >> n) || n < 0) {
        std::cout << "Invalid input! Enter a non-negative integer: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    
    std::vector<int> vec(n);
    if (n > 0) {
        std::cout << "Enter " << n << " integers: ";
        for (int i = 0; i < n; i++) {
            while (!(std::cin >> vec[i])) {
                std::cout << "Invalid input! Enter an integer: ";
                std::cin.clear();
                std::cin.ignore(1000, '\n');
            }
        }
    }
    
    if (n == 0) {
        std::cout << "No numbers entered." << std::endl;
        return 0;
    }
    
    // Use set to remove duplicates and sort in descending order
    std::set<int, std::greater<int>> distinctNumbers(vec.begin(), vec.end());
    
    int count = std::min(3, static_cast<int>(distinctNumbers.size()));
    std::cout << "Top " << count << " distinct numbers: ";
    
    auto it = distinctNumbers.begin();
    for (int i = 0; i < count; i++) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    
    return 0;
}