class Solution {
public:
    int maxDifference(string s) {
        map<int,int>freq;
        for(auto it:s){
            freq[it]++;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto it:freq){
            if(it.second%2==1){
            maxi=max(it.second,maxi);
            }
            else{
            mini=min(it.second,mini);
            }
        }
        return maxi-mini;
    }
};