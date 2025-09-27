class Solution {
    public int singleNonDuplicate(int[] arr) {
        int ans=0;
        for(int it:arr){
            ans^=it;
        }
        return ans;
    }
}