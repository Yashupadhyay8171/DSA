class Solution {
    public int pivotIndex(int[] nums) {
        int arr1[]=new int[nums.length];
        int arr2[]=new int[nums.length];
        for(int i=1;i<nums.length;i++){
            arr1[i]=nums[i-1]+arr1[i-1];
        }
        for(int j=nums.length-2;j>=0;j--){
            arr2[j]=arr2[j+1]+nums[j+1];
        }
        for(int i=0;i<arr1.length;i++){
            if(arr1[i]==arr2[i]) return i;
        }
        return -1;
    }
}