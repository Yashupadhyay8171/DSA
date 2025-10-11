def find_max_builtin(arr):
    """Method 1: Using built-in max() function"""
    if not arr:
        print("Array is empty!")
        return float('-inf')
    return max(arr)

def find_max_linear(arr):
    """Method 2: Linear search"""
    if not arr:
        print("Array is empty!")
        return float('-inf')
    
    max_element = arr[0]
    for i in range(1, len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]
    return max_element

def find_max_recursive(arr, index=0):
    """Method 3: Using recursion"""
    if not arr:
        print("Array is empty!")
        return float('-inf')
    
    if index == len(arr) - 1:
        return arr[index]
    return max(arr[index], find_max_recursive(arr, index + 1))

def find_max_with_index(arr):
    """Method 4: Find max with its index"""
    if not arr:
        return (float('-inf'), -1)
    
    max_element = arr[0]
    max_index = 0
    
    for i in range(1, len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]
            max_index = i
    
    return (max_element, max_index)

def find_max_numpy(arr):
    """Method 5: Using NumPy (if available)"""
    try:
        import numpy as np
        if len(arr) == 0:
            print("Array is empty!")
            return float('-inf')
        return np.max(arr)
    except ImportError:
        print("NumPy not available, using built-in max()")
        return find_max_builtin(arr)

def find_max_sorting(arr):
    """Method 6: Using sorting (not efficient for just finding max)"""
    if not arr:
        print("Array is empty!")
        return float('-inf')
    
    sorted_arr = sorted(arr)
    return sorted_arr[-1]

def find_max_reduce(arr):
    """Method 7: Using functools.reduce"""
    from functools import reduce
    if not arr:
        print("Array is empty!")
        return float('-inf')
    
    return reduce(lambda a, b: a if a > b else b, arr)

def main():
    # Test cases
    arr1 = [3, 7, 2, 9, 1, 5]
    arr2 = [10, 20, 30, 40, 50]
    arr3 = [5]
    arr4 = []
    
    print("=== Finding Maximum Element in Array ===")
    print(f"Array: {arr1}")
    
    print(f"\nMethod 1 (Built-in max): {find_max_builtin(arr1)}")
    print(f"Method 2 (Linear): {find_max_linear(arr1)}")
    print(f"Method 3 (Recursive): {find_max_recursive(arr1)}")
    print(f"Method 6 (Sorting): {find_max_sorting(arr1)}")
    print(f"Method 7 (Reduce): {find_max_reduce(arr1)}")
    
    max_val, max_idx = find_max_with_index(arr1)
    print(f"Method 4 (With Index): {max_val} at index {max_idx}")
    
    # Test with different arrays
    print("\n=== Test Cases ===")
    print(f"Array [10, 20, 30, 40, 50]: {find_max_linear(arr2)}")
    print(f"Array [5]: {find_max_linear(arr3)}")
    print(f"Empty array: {find_max_linear(arr4)}")
    
    # Performance comparison for large arrays
    print("\n=== Performance Test ===")
    import time
    import random
    
    large_arr = [random.randint(1, 1000000) for _ in range(100000)]
    
    # Test built-in max
    start_time = time.time()
    result1 = find_max_builtin(large_arr)
    time1 = time.time() - start_time
    
    # Test linear search
    start_time = time.time()
    result2 = find_max_linear(large_arr)
    time2 = time.time() - start_time
    
    print(f"Large array (100,000 elements):")
    print(f"Built-in max: {result1} (Time: {time1:.6f}s)")
    print(f"Linear search: {result2} (Time: {time2:.6f}s)")

if __name__ == "__main__":
    main()