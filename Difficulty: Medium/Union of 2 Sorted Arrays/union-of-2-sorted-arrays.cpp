class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int>ans;
        map<int,int>mp;
        for(auto it:a){
            mp[it]++;
        }
        for(auto it:b){
            mp[it]++;
        }
        for(auto it:mp){
            ans.push_back(it.first);
        }
        return ans;
    }
};