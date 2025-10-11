#!/usr/bin/env python3
"""
Maximum Element Finder - Python Implementation
Contains multiple methods to find maximum elements in arrays/lists
"""

import sys
from typing import List, Tuple, Optional


class MaxElementFinder:
    """Class containing various methods to find maximum elements"""
    
    @staticmethod
    def find_max_builtin(arr: List[int]) -> int:
        """Method 1: Using built-in max() function"""
        if not arr:
            raise ValueError("Array cannot be empty")
        return max(arr)
    
    @staticmethod
    def find_max_linear(arr: List[int]) -> int:
        """Method 2: Using linear search (manual implementation)"""
        if not arr:
            raise ValueError("Array cannot be empty")
        
        max_val = arr[0]
        for i in range(1, len(arr)):
            if arr[i] > max_val:
                max_val = arr[i]
        return max_val
    
    @staticmethod
    def find_max_recursive(arr: List[int], index: int = 0) -> int:
        """Method 3: Using recursion"""
        if not arr:
            raise ValueError("Array cannot be empty")
        
        # Base case: if we're at the last element
        if index == len(arr) - 1:
            return arr[index]
        
        # Recursive case: compare current element with max of remaining elements
        max_of_rest = MaxElementFinder.find_max_recursive(arr, index + 1)
        return max(arr[index], max_of_rest)
    
    @staticmethod
    def find_max_with_index(arr: List[int]) -> Tuple[int, int]:
        """Method 4: Find maximum with its index"""
        if not arr:
            raise ValueError("Array cannot be empty")
        
        max_val = arr[0]
        max_index = 0
        
        for i in range(1, len(arr)):
            if arr[i] > max_val:
                max_val = arr[i]
                max_index = i
        
        return max_val, max_index
    
    @staticmethod
    def find_all_max_indices(arr: List[int]) -> List[int]:
        """Method 5: Find all occurrences of maximum element"""
        if not arr:
            raise ValueError("Array cannot be empty")
        
        max_val = MaxElementFinder.find_max_builtin(arr)
        indices = []
        
        for i in range(len(arr)):
            if arr[i] == max_val:
                indices.append(i)
        
        return indices
    
    @staticmethod
    def find_max_using_enumerate(arr: List[int]) -> Tuple[int, int]:
        """Method 6: Using enumerate for pythonic approach"""
        if not arr:
            raise ValueError("Array cannot be empty")
        
        max_val, max_index = max(enumerate(arr), key=lambda x: x[1])
        return arr[max_index], max_index
    
    @staticmethod
    def find_max_in_2d(matrix: List[List[int]]) -> int:
        """Method 7: Find maximum in 2D array/matrix"""
        if not matrix or not matrix[0]:
            raise ValueError("Matrix cannot be empty")
        
        max_val = matrix[0][0]
        for row in matrix:
            for val in row:
                if val > max_val:
                    max_val = val
        return max_val
    
    @staticmethod
    def find_max_with_condition(arr: List[int], condition=None) -> Optional[int]:
        """Method 8: Find maximum with optional condition"""
        if not arr:
            raise ValueError("Array cannot be empty")
        
        if condition is None:
            return max(arr)
        
        filtered_arr = [x for x in arr if condition(x)]
        if not filtered_arr:
            return None
        
        return max(filtered_arr)
    
    @staticmethod
    def find_top_k_max(arr: List[int], k: int) -> List[int]:
        """Method 9: Find top k maximum elements"""
        if not arr:
            raise ValueError("Array cannot be empty")
        if k <= 0:
            raise ValueError("k must be positive")
        
        # Sort in descending order and take first k elements
        sorted_arr = sorted(arr, reverse=True)
        return sorted_arr[:k]


def run_tests():
    """Test function to demonstrate all methods"""
    test_array = [3, 7, 2, 9, 1, 8, 5]
    
    print(f"Test Array: {test_array}\n")
    
    # Test different methods
    print(f"Method 1 (Built-in): {MaxElementFinder.find_max_builtin(test_array)}")
    print(f"Method 2 (Linear): {MaxElementFinder.find_max_linear(test_array)}")
    print(f"Method 3 (Recursive): {MaxElementFinder.find_max_recursive(test_array)}")
    
    max_val, max_idx = MaxElementFinder.find_max_with_index(test_array)
    print(f"Method 4 (With Index): Max = {max_val} at index {max_idx}")
    
    print(f"Method 5 (All Max Indices): {MaxElementFinder.find_all_max_indices(test_array)}")
    
    max_val_enum, max_idx_enum = MaxElementFinder.find_max_using_enumerate(test_array)
    print(f"Method 6 (Enumerate): Max = {max_val_enum} at index {max_idx_enum}")
    
    # Test with 2D array
    matrix = [
        [1, 5, 3],
        [9, 2, 8],
        [4, 7, 6]
    ]
    print(f"\n2D Array Test:")
    for row in matrix:
        print(row)
    print(f"Maximum in 2D array: {MaxElementFinder.find_max_in_2d(matrix)}")
    
    # Test with condition
    print(f"\nConditional Max (even numbers only): {MaxElementFinder.find_max_with_condition(test_array, lambda x: x % 2 == 0)}")
    print(f"Conditional Max (> 5): {MaxElementFinder.find_max_with_condition(test_array, lambda x: x > 5)}")
    
    # Test top k maximum
    print(f"Top 3 maximum elements: {MaxElementFinder.find_top_k_max(test_array, 3)}")
    
    # Test with duplicate maximum values
    duplicate_max = [3, 9, 2, 9, 1, 9, 5]
    print(f"\nTest with duplicates: {duplicate_max}")
    print(f"All max indices: {MaxElementFinder.find_all_max_indices(duplicate_max)}")
    
    # Performance comparison for large arrays
    print(f"\n=== Performance Test ===")
    large_array = list(range(1000000))
    
    import time
    
    # Test built-in max
    start_time = time.time()
    result1 = MaxElementFinder.find_max_builtin(large_array)
    time1 = time.time() - start_time
    
    # Test linear search
    start_time = time.time()
    result2 = MaxElementFinder.find_max_linear(large_array)
    time2 = time.time() - start_time
    
    print(f"Built-in max(): {result1} (Time: {time1:.6f}s)")
    print(f"Linear search: {result2} (Time: {time2:.6f}s)")


if __name__ == "__main__":
    print("=== Maximum Element Finder (Python) ===\n")
    
    try:
        run_tests()
    except Exception as e:
        print(f"Error: {e}", file=sys.stderr)