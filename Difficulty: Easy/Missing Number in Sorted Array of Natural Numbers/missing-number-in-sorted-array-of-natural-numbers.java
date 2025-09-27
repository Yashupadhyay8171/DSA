class Solution {
    int missingNumber(int arr[]) {
        // code here
        int ans=arr.length+1;
        int s=0;
        int e=arr.length-1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(arr[mid]-mid==1){
                s=mid+1;
            }
            else{
                ans=mid+1;
                e=mid-1;
            }
        }
        return ans;
    }
}