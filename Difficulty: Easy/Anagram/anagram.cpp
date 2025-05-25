class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        map<int,int>mp;
        for(auto it:s1){
            mp[it]++;
        }
        for(auto it:s2){
            mp[it]--;
        }
        for(auto it:mp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};