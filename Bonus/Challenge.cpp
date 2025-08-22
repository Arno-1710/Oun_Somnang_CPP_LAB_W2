#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    const int SIZE = 5;
    const int MIN = 10;
    const int MAX = 50;
    int arr[SIZE];
    
    std::srand(std::time(0));
    
    std::cout << "Generating " << SIZE << " random numbers between " 
              << MIN << " and " << MAX << ":" << std::endl;
    
    // Fill array with random values in specified range
    for (int i = 0; i < SIZE; i++) {
        arr[i] = MIN + std::rand() % (MAX - MIN + 1);
    }
    
    std::cout << "Original: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Ascending sort
    int asc[SIZE];
    std::copy(arr, arr + SIZE, asc);
    std::sort(asc, asc + SIZE);
    
    std::cout << "Ascending: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << asc[i] << " ";
    }
    std::cout << std::endl;
    
    // Descending sort (using reverse iterators)
    int desc[SIZE];
    std::copy(arr, arr + SIZE, desc);
    std::sort(desc, desc + SIZE);
    std::reverse(desc, desc + SIZE);
    
    std::cout << "Descending: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << desc[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}