#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main() {
    int n, m;
    
    std::cout << "Enter size of first array (n): ";
    std::cin >> n;
    std::cout << "Enter size of second array (m): ";
    std::cin >> m;
    
    std::vector<int> arr1(n), arr2(m);
    
    std::cout << "Enter " << n << " integers for first array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    
    std::cout << "Enter " << m << " integers for second array: ";
    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }
    
    // Merge arrays
    std::vector<int> merged;
    merged.reserve(n + m); // Pre-allocate memory
    merged.insert(merged.end(), arr1.begin(), arr1.end());
    merged.insert(merged.end(), arr2.begin(), arr2.end());
    
    std::cout << "\na. Merged array (" << merged.size() << " elements): ";
    for (int num : merged) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Remove duplicates and sort
    std::set<int> uniqueSet(merged.begin(), merged.end());
    std::vector<int> uniqueSorted(uniqueSet.begin(), uniqueSet.end());
    
    std::cout << "b. Sorted unique values (" << uniqueSorted.size() << " elements): ";
    for (int num : uniqueSorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}