# Maximum Element Finder

This repository contains comprehensive implementations for finding maximum elements in arrays/lists across multiple programming languages.

## Files Included

- `find-maximum-element.cpp` - C++ implementation
- `FindMaximumElement.java` - Java implementation  
- `find_maximum_element.py` - Python implementation

## Features

### Multiple Approaches
Each implementation includes various methods to find maximum elements:

1. **Built-in Functions** - Using language-specific built-in functions (STL, Collections, max())
2. **Linear Search** - Manual iteration through the array
3. **Recursive Approach** - Finding maximum using recursion
4. **Maximum with Index** - Finding both the maximum value and its position
5. **All Occurrences** - Finding all indices where maximum value occurs
6. **2D Array Support** - Finding maximum in matrices
7. **Conditional Maximum** - Finding maximum with custom conditions (Python)
8. **Top K Elements** - Finding top k maximum elements (Python)

### Time Complexity
- **Linear Search**: O(n)
- **Built-in Functions**: O(n) 
- **Recursive**: O(n) with O(n) space complexity due to call stack
- **2D Array**: O(m×n) where m and n are matrix dimensions

### Space Complexity
- **Most methods**: O(1) auxiliary space
- **Recursive**: O(n) due to recursion stack
- **All occurrences**: O(k) where k is number of maximum elements

## How to Run

### C++
```bash
g++ -o find_max find-maximum-element.cpp
./find_max
```

### Java
```bash
javac FindMaximumElement.java
java FindMaximumElement
```

### Python
```bash
python3 find_maximum_element.py
```

## Example Usage

### C++
```cpp
vector<int> arr = {3, 7, 2, 9, 1, 8, 5};
int max_val = MaxElementFinder::findMaxSTL(arr);
auto max_with_index = MaxElementFinder::findMaxWithIndex(arr);
```

### Java
```java
int[] arr = {3, 7, 2, 9, 1, 8, 5};
int max_val = FindMaximumElement.findMaxLinear(arr);
MaxResult result = FindMaximumElement.findMaxWithIndex(arr);
```

### Python
```python
arr = [3, 7, 2, 9, 1, 8, 5]
max_val = MaxElementFinder.find_max_builtin(arr)
max_val, max_idx = MaxElementFinder.find_max_with_index(arr)
```

## Test Cases Included

- Basic array with unique elements
- Arrays with duplicate maximum values
- 2D matrices
- Performance comparison (Python)
- Edge cases (empty arrays, single elements)
- Conditional maximum finding (Python)

## Error Handling

All implementations include proper error handling for:
- Empty arrays/lists
- Invalid inputs
- Boundary conditions

## Performance Notes

- Built-in functions are typically optimized and fastest
- Linear search provides good understanding of the algorithm
- Recursive approach is educational but uses more memory
- For large datasets, built-in functions are recommended