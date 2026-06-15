class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        k=k%arr.size();
        vector<int>ans(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            ans[(i+k)%arr.size()]=arr[i];
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=ans[i];
        }
        return;
    }
};