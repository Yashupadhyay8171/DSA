class Solution {
    public int missingNumber(int[] nums) {
        int totalsm=((nums.length)*(nums.length+1))/2;
        int sm=0;
        for(int it:nums){
            sm+=it;
        }
        return totalsm-sm;
    }
}