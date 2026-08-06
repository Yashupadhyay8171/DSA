import java.util.*;

public class MaxElement {
    
    // Method 1: Using Collections.max()
    public static int findMaxCollections(List<Integer> list) {
        if (list.isEmpty()) {
            System.out.println("List is empty!");
            return Integer.MIN_VALUE;
        }
        return Collections.max(list);
    }
    
    // Method 2: Using Arrays.stream() for array
    public static int findMaxStream(int[] arr) {
        if (arr.length == 0) {
            System.out.println("Array is empty!");
            return Integer.MIN_VALUE;
        }
        return Arrays.stream(arr).max().orElse(Integer.MIN_VALUE);
    }
    
    // Method 3: Linear search
    public static int findMaxLinear(int[] arr) {
        if (arr.length == 0) {
            System.out.println("Array is empty!");
            return Integer.MIN_VALUE;
        }
        
        int maxElement = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }
    
    // Method 4: Using recursion
    public static int findMaxRecursive(int[] arr, int index) {
        if (index == arr.length - 1) {
            return arr[index];
        }
        return Math.max(arr[index], findMaxRecursive(arr, index + 1));
    }
    
    // Method 5: Find max with its index
    public static int[] findMaxWithIndex(int[] arr) {
        if (arr.length == 0) {
            return new int[]{Integer.MIN_VALUE, -1};
        }
        
        int maxElement = arr[0];
        int maxIndex = 0;
        
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
                maxIndex = i;
            }
        }
        return new int[]{maxElement, maxIndex};
    }
    
    // Method 6: Using PriorityQueue (max heap)
    public static int findMaxHeap(int[] arr) {
        if (arr.length == 0) {
            System.out.println("Array is empty!");
            return Integer.MIN_VALUE;
        }
        
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        for (int num : arr) {
            maxHeap.offer(num);
        }
        return maxHeap.poll();
    }
    
    public static void main(String[] args) {
        // Test cases
        int[] arr1 = {3, 7, 2, 9, 1, 5};
        int[] arr2 = {10, 20, 30, 40, 50};
        int[] arr3 = {5};
        int[] arr4 = {};
        
        List<Integer> list1 = Arrays.asList(3, 7, 2, 9, 1, 5);
        
        System.out.println("=== Finding Maximum Element in Array ===");
        System.out.print("Array: ");
        for (int num : arr1) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        System.out.println("\nMethod 1 (Collections.max): " + findMaxCollections(list1));
        System.out.println("Method 2 (Stream): " + findMaxStream(arr1));
        System.out.println("Method 3 (Linear): " + findMaxLinear(arr1));
        System.out.println("Method 4 (Recursive): " + findMaxRecursive(arr1, 0));
        System.out.println("Method 6 (Max Heap): " + findMaxHeap(arr1));
        
        int[] result = findMaxWithIndex(arr1);
        System.out.println("Method 5 (With Index): " + result[0] + " at index " + result[1]);
        
        // Test with different arrays
        System.out.println("\n=== Test Cases ===");
        System.out.println("Array [10, 20, 30, 40, 50]: " + findMaxLinear(arr2));
        System.out.println("Array [5]: " + findMaxLinear(arr3));
        System.out.println("Empty array: " + findMaxLinear(arr4));
    }
}