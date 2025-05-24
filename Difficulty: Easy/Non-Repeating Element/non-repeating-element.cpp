
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:arr){
            if(mp[it]==1){
                return it;
            }
        }
        return 0;
    }
};
