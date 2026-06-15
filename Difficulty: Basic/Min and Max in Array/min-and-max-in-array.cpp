class Solution {
  public:
    int findMax(vector<int>&arr){
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(ans<arr[i]){
                ans=arr[i];
            }
        }
        return ans;
    }
    int findMin(vector<int>&arr){
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<ans){
                ans=arr[i];
            }
        }
        return ans;
    }
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        return {findMin(arr),findMax(arr)};
    }
};