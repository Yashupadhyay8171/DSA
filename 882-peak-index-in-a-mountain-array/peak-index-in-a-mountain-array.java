class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int ans=-1;
        int s=0;
        int e=arr.length-1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
}