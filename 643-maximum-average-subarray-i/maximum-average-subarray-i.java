class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxi=Integer.MIN_VALUE;
        maxi=Math.max(maxi,sum);
        int j=0;
        for(int i=k;i<nums.length;i++){
            sum=sum-nums[j++];
            sum+=nums[i];
            maxi=Math.max(maxi,sum);
        }
        return maxi/(double)k;
    }
}