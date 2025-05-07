class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int r=arr.size();
        int c=arr[0].size();
        int s=0;
        int e = (r*c)-1;
        while(s<=e){
            int mid=(s+e)>>1;
            int i=mid/c;
            int j=mid%c;
            if(arr[i][j]==target){
                return true;
            }
            else if(arr[i][j]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};