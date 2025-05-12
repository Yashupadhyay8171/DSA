class Solution {
public:
    void solve(vector<int>&arr,int i,int mini,int &maxi){
        if(i>=arr.size()){
            return;
        }
        if(arr[i]<mini){
            mini=arr[i];
        }
        int today=arr[i]-mini;
        if(maxi<today){
            maxi=today;
        }
        return solve(arr,i+1,mini,maxi);
    }
    int maxProfit(vector<int>& arr) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        solve(arr,0,mini,maxi);
        return maxi;
    }
};