class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string ans="";
        while(true){
            char curr=0;
            for(auto it:strs){
                if(i>=it.size()) return ans;
                if(curr==0){
                    curr+=it[i];
                }
                else if(curr!=it[i]){
                    curr=0;
                    break;
                }
            }
            if(curr==0){
                break;
            }
            ans+=curr;
            i++;
        }
        return ans;
    }
};