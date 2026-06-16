# Maximum Element Finder

This directory contains implementations for finding the maximum element in an array using different approaches and programming languages.

## Problem Description

Given an array of integers, find the maximum element. The solution should handle:
- Empty arrays
- Single element arrays
- Arrays with duplicate maximum values
- Large arrays efficiently

## Solutions

### C++ (`max_element.cpp`)
- **Method 1**: Using STL `max_element`
- **Method 2**: Linear search
- **Method 3**: Recursive approach
- **Method 4**: Find max with its index

**Compile and run:**
```bash
g++ -o max_element max_element.cpp
./max_element
```

### Java (`max_element.java`)
- **Method 1**: Using `Collections.max()`
- **Method 2**: Using `Arrays.stream()`
- **Method 3**: Linear search
- **Method 4**: Recursive approach
- **Method 5**: Find max with its index
- **Method 6**: Using PriorityQueue (max heap)

**Compile and run:**
```bash
javac max_element.java
java MaxElement
```

### Python (`max_element.py`)
- **Method 1**: Using built-in `max()` function
- **Method 2**: Linear search
- **Method 3**: Recursive approach
- **Method 4**: Find max with its index
- **Method 5**: Using NumPy (if available)
- **Method 6**: Using sorting
- **Method 7**: Using `functools.reduce`

**Run:**
```bash
python max_element.py
```

## Time Complexity

| Method | Time Complexity | Space Complexity | Notes |
|--------|----------------|------------------|-------|
| Linear Search | O(n) | O(1) | Most common approach |
| Built-in max() | O(n) | O(1) | Optimized implementation |
| Recursive | O(n) | O(n) | Due to recursion stack |
| Sorting | O(n log n) | O(1) | Not efficient for just finding max |
| Max Heap | O(n log n) | O(n) | Overkill for this problem |

## Test Cases

All implementations include test cases for:
- Normal array: `[3, 7, 2, 9, 1, 5]` → Max: 9
- Sorted array: `[10, 20, 30, 40, 50]` → Max: 50
- Single element: `[5]` → Max: 5
- Empty array: `[]` → Handled gracefully

## Performance Notes

- For most use cases, the built-in `max()` function or linear search is recommended
- Recursive approach should be avoided for large arrays due to stack overflow risk
- Sorting approach is inefficient when you only need the maximum value
- The linear search approach gives you the most control and is easy to understand

## Usage Examples

### C++
```cpp
vector<int> arr = {3, 7, 2, 9, 1, 5};
int maxElement = findMaxLinear(arr);
cout << "Maximum element: " << maxElement << endl;
```

### Java
```java
int[] arr = {3, 7, 2, 9, 1, 5};
int maxElement = findMaxLinear(arr);
System.out.println("Maximum element: " + maxElement);
```

### Python
```python
arr = [3, 7, 2, 9, 1, 5]
max_element = find_max_linear(arr)
print(f"Maximum element: {max_element}")
```