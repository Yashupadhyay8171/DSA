class Solution {
    public int singleNonDuplicate(int[] arr) {
        int s=0;
        int e=arr.length-1;
        int ans=-1;
        while(s<=e){
            if(s==e){
                return arr[s];
            }
            int mid=(s+e)>>1;
            if((mid&1)==0){
                if(arr[mid]==arr[mid+1]){
                    s=mid+2;
                }
                else{
                    ans=arr[mid];
                    e=mid-1;
                }
            }
            else{
                if(arr[mid]==arr[mid-1]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return ans;
    }
}