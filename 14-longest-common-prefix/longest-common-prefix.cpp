class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string ans="";
        while(true){
            char curr=0;
            for(auto s:strs){
                if(i>=s.size()){
                    curr=0;
                    break;
                }
                if(curr==0){
                    curr=s[i];
                }
                else if(s[i]!=curr){
                    curr=0;
                    break;
                }
            }
            if(curr==0){
                break;
            }
            ans.push_back(curr);
            i++;
        }
        return ans;
    }
};