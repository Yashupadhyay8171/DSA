#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Method 1: Using STL max_element
int findMaxSTL(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty!" << endl;
        return INT_MIN;
    }
    return *max_element(arr.begin(), arr.end());
}

// Method 2: Linear search
int findMaxLinear(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty!" << endl;
        return INT_MIN;
    }
    
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// Method 3: Using recursion
int findMaxRecursive(const vector<int>& arr, int index) {
    if (index == arr.size() - 1) {
        return arr[index];
    }
    return max(arr[index], findMaxRecursive(arr, index + 1));
}

// Method 4: Find max with its index
pair<int, int> findMaxWithIndex(const vector<int>& arr) {
    if (arr.empty()) {
        return {INT_MIN, -1};
    }
    
    int maxElement = arr[0];
    int maxIndex = 0;
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    return {maxElement, maxIndex};
}

int main() {
    // Test cases
    vector<int> arr1 = {3, 7, 2, 9, 1, 5};
    vector<int> arr2 = {10, 20, 30, 40, 50};
    vector<int> arr3 = {5};
    vector<int> arr4 = {};
    
    cout << "=== Finding Maximum Element in Array ===" << endl;
    cout << "Array: ";
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "\nMethod 1 (STL): " << findMaxSTL(arr1) << endl;
    cout << "Method 2 (Linear): " << findMaxLinear(arr1) << endl;
    cout << "Method 3 (Recursive): " << findMaxRecursive(arr1, 0) << endl;
    
    auto result = findMaxWithIndex(arr1);
    cout << "Method 4 (With Index): " << result.first << " at index " << result.second << endl;
    
    // Test with different arrays
    cout << "\n=== Test Cases ===" << endl;
    cout << "Array [10, 20, 30, 40, 50]: " << findMaxLinear(arr2) << endl;
    cout << "Array [5]: " << findMaxLinear(arr3) << endl;
    cout << "Empty array: " << findMaxLinear(arr4) << endl;
    
    return 0;
}