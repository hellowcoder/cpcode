#include <iostream>
#include <unordered_map>
#include <vector>
 
int main() {
    int n;
    
    // Input: Number of elements in the array
    //std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
 
    std::vector<int> arr(n);
    
    // Input: Elements of the array
    //std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
 
    std::unordered_map<int, int> frequencyMap;
    
    // Count the frequency of each number
    for (int num : arr) {
        frequencyMap[num]++;
    }
 
    int mostFrequentNum = arr[0];
    int maxCount = 0;
 
    // Find the most frequent number
    for (const auto& entry : frequencyMap) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            mostFrequentNum = entry.first;
        }
    }
 
    // Output: Most frequent number and its count
    std::cout<< maxCount << std::endl;
 
    return 0;
}