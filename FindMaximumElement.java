import java.util.*;

public class FindMaximumElement {
    
    // Method 1: Using Collections.max()
    public static int findMaxUsingCollections(int[] arr) {
        if (arr.length == 0) {
            throw new IllegalArgumentException("Array cannot be empty");
        }
        
        List<Integer> list = new ArrayList<>();
        for (int num : arr) {
            list.add(num);
        }
        return Collections.max(list);
    }
    
    // Method 2: Using Arrays.stream().max()
    public static int findMaxUsingStream(int[] arr) {
        if (arr.length == 0) {
            throw new IllegalArgumentException("Array cannot be empty");
        }
        
        return Arrays.stream(arr).max().orElseThrow();
    }
    
    // Method 3: Using linear search (manual implementation)
    public static int findMaxLinear(int[] arr) {
        if (arr.length == 0) {
            throw new IllegalArgumentException("Array cannot be empty");
        }
        
        int maxVal = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
    
    // Method 4: Using recursion
    public static int findMaxRecursive(int[] arr, int index) {
        if (arr.length == 0) {
            throw new IllegalArgumentException("Array cannot be empty");
        }
        
        // Base case: if we're at the last element
        if (index == arr.length - 1) {
            return arr[index];
        }
        
        // Recursive case: compare current element with max of remaining elements
        int maxOfRest = findMaxRecursive(arr, index + 1);
        return Math.max(arr[index], maxOfRest);
    }
    
    // Overloaded method for easier use
    public static int findMaxRecursive(int[] arr) {
        return findMaxRecursive(arr, 0);
    }
    
    // Method 5: Find maximum with its index
    public static class MaxResult {
        public final int value;
        public final int index;
        
        public MaxResult(int value, int index) {
            this.value = value;
            this.index = index;
        }
        
        @Override
        public String toString() {
            return "Max = " + value + " at index " + index;
        }
    }
    
    public static MaxResult findMaxWithIndex(int[] arr) {
        if (arr.length == 0) {
            throw new IllegalArgumentException("Array cannot be empty");
        }
        
        int maxVal = arr[0];
        int maxIndex = 0;
        
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
                maxIndex = i;
            }
        }
        
        return new MaxResult(maxVal, maxIndex);
    }
    
    // Method 6: Find all occurrences of maximum element
    public static List<Integer> findAllMaxIndices(int[] arr) {
        if (arr.length == 0) {
            throw new IllegalArgumentException("Array cannot be empty");
        }
        
        int maxVal = findMaxLinear(arr);
        List<Integer> indices = new ArrayList<>();
        
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == maxVal) {
                indices.add(i);
            }
        }
        
        return indices;
    }
    
    // Method 7: Find maximum in 2D array
    public static int findMaxIn2D(int[][] matrix) {
        if (matrix.length == 0 || matrix[0].length == 0) {
            throw new IllegalArgumentException("Matrix cannot be empty");
        }
        
        int maxVal = matrix[0][0];
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                if (matrix[i][j] > maxVal) {
                    maxVal = matrix[i][j];
                }
            }
        }
        return maxVal;
    }
    
    // Test method
    public static void runTests() {
        int[] testArray = {3, 7, 2, 9, 1, 8, 5};
        
        System.out.print("Test Array: ");
        System.out.println(Arrays.toString(testArray));
        System.out.println();
        
        // Test different methods
        System.out.println("Method 1 (Collections): " + findMaxUsingCollections(testArray));
        System.out.println("Method 2 (Stream): " + findMaxUsingStream(testArray));
        System.out.println("Method 3 (Linear): " + findMaxLinear(testArray));
        System.out.println("Method 4 (Recursive): " + findMaxRecursive(testArray));
        System.out.println("Method 5 (With Index): " + findMaxWithIndex(testArray));
        System.out.println("Method 6 (All Max Indices): " + findAllMaxIndices(testArray));
        
        // Test with 2D array
        int[][] matrix = {
            {1, 5, 3},
            {9, 2, 8},
            {4, 7, 6}
        };
        System.out.println("\n2D Array Test:");
        for (int[] row : matrix) {
            System.out.println(Arrays.toString(row));
        }
        System.out.println("Maximum in 2D array: " + findMaxIn2D(matrix));
        
        // Test with duplicate maximum values
        int[] duplicateMax = {3, 9, 2, 9, 1, 9, 5};
        System.out.println("\nTest with duplicates: " + Arrays.toString(duplicateMax));
        System.out.println("All max indices: " + findAllMaxIndices(duplicateMax));
    }
    
    public static void main(String[] args) {
        System.out.println("=== Maximum Element Finder (Java) ===\n");
        
        try {
            runTests();
        } catch (Exception e) {
            System.err.println("Error: " + e.getMessage());
        }
    }
}