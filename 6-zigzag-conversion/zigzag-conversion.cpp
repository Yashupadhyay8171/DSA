class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string>ans(numRows);
        int i=0;
        int row=0;
        bool flag=true;
        while(i<s.size()){
            if(flag){
                while(row<numRows && i<s.size()){
                    ans[row++].push_back(s[i++]);
                }
                row=numRows-2;
                flag=false;
            }
            else{
                while(row>=0 && i<s.size()){
                    ans[row--].push_back(s[i++]);
                }
                row=1;
                flag=true;
            }
        }
        s.clear();
        for(auto it:ans){
            s+=it;
        }
        return s;
    }
};