// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int ans=arr[arr.size()-1];
        for(int i=arr.size();i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=ans;
        return;
    }
};