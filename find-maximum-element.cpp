#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class MaxElementFinder {
public:
    // Method 1: Using STL max_element function
    static int findMaxSTL(const vector<int>& arr) {
        if (arr.empty()) {
            throw invalid_argument("Array cannot be empty");
        }
        return *max_element(arr.begin(), arr.end());
    }
    
    // Method 2: Using linear search (manual implementation)
    static int findMaxLinear(const vector<int>& arr) {
        if (arr.empty()) {
            throw invalid_argument("Array cannot be empty");
        }
        
        int maxVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
    
    // Method 3: Using recursion
    static int findMaxRecursive(const vector<int>& arr, int index = 0) {
        if (arr.empty()) {
            throw invalid_argument("Array cannot be empty");
        }
        
        // Base case: if we're at the last element
        if (index == arr.size() - 1) {
            return arr[index];
        }
        
        // Recursive case: compare current element with max of remaining elements
        int maxOfRest = findMaxRecursive(arr, index + 1);
        return max(arr[index], maxOfRest);
    }
    
    // Method 4: Find maximum with its index
    static pair<int, int> findMaxWithIndex(const vector<int>& arr) {
        if (arr.empty()) {
            throw invalid_argument("Array cannot be empty");
        }
        
        int maxVal = arr[0];
        int maxIndex = 0;
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
                maxIndex = i;
            }
        }
        
        return make_pair(maxVal, maxIndex);
    }
    
    // Method 5: Find all occurrences of maximum element
    static vector<int> findAllMaxIndices(const vector<int>& arr) {
        if (arr.empty()) {
            throw invalid_argument("Array cannot be empty");
        }
        
        int maxVal = findMaxSTL(arr);
        vector<int> indices;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == maxVal) {
                indices.push_back(i);
            }
        }
        
        return indices;
    }
};

// Test function
void runTests() {
    vector<int> testArray = {3, 7, 2, 9, 1, 8, 5};
    
    cout << "Test Array: ";
    for (int val : testArray) {
        cout << val << " ";
    }
    cout << endl << endl;
    
    // Test Method 1: STL
    cout << "Method 1 (STL): " << MaxElementFinder::findMaxSTL(testArray) << endl;
    
    // Test Method 2: Linear
    cout << "Method 2 (Linear): " << MaxElementFinder::findMaxLinear(testArray) << endl;
    
    // Test Method 3: Recursive
    cout << "Method 3 (Recursive): " << MaxElementFinder::findMaxRecursive(testArray) << endl;
    
    // Test Method 4: With Index
    auto maxWithIndex = MaxElementFinder::findMaxWithIndex(testArray);
    cout << "Method 4 (With Index): Max = " << maxWithIndex.first 
         << " at index " << maxWithIndex.second << endl;
    
    // Test Method 5: All occurrences
    vector<int> allIndices = MaxElementFinder::findAllMaxIndices(testArray);
    cout << "Method 5 (All Max Indices): ";
    for (int idx : allIndices) {
        cout << idx << " ";
    }
    cout << endl;
    
    // Test with duplicate maximum values
    vector<int> duplicateMax = {3, 9, 2, 9, 1, 9, 5};
    cout << "\nTest with duplicates: ";
    for (int val : duplicateMax) {
        cout << val << " ";
    }
    cout << endl;
    
    vector<int> duplicateIndices = MaxElementFinder::findAllMaxIndices(duplicateMax);
    cout << "All max indices: ";
    for (int idx : duplicateIndices) {
        cout << idx << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== Maximum Element Finder ===" << endl << endl;
    
    try {
        runTests();
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}