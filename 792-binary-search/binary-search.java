class Solution {
    public int search(int[] arr, int target) {
        int s=0;
        int e=arr.length-1;
        int ans=-1;
        while(s<=e){
            if(s==e && arr[s]==target) return s;
            int mid=(s+e)>>1;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
}