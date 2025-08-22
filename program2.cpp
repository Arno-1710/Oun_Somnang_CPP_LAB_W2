#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k;
    
    std::cout << "Enter n: ";
    while (!(std::cin >> n) || n <= 0) {
        std::cout << "Invalid input! Enter a positive integer for n: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    
    std::cout << "Enter k: ";
    while (!(std::cin >> k)) {
        std::cout << "Invalid input! Enter an integer for k: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    
    std::vector<int> vec(n);
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    
    // Handle k larger than n and negative k
    k = k % n;
    if (k < 0) k += n;
    
    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Rotate using std::rotate
    std::rotate(vec.rbegin(), vec.rbegin() + k, vec.rend());
    
    std::cout << "After rotating right by " << k << " positions: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}