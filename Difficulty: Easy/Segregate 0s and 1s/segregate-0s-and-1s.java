// User function Template for Java

class Solution {
    void segregate0and1(int[] nums) {
        // code here
        int i=0;
        int j=nums.length-1;
        int index=0;
        while(index<=j){
            if(nums[index]==0){
                int temp=nums[i];
                nums[i]=nums[index];
                nums[index]=temp;
                i++;
                index++;
            }
            else{
                int temp=nums[index];
                nums[index]=nums[j];
                nums[j]=temp;
                j--;
            }
        }
    }
}
