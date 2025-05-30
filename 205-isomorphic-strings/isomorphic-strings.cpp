class Solution {
public:

    void pattern(string &s){
        map<char,char>mp;
        char ch='a';
        for(auto it:s){
            if(mp.find(it)==mp.end()){
                mp[it]=ch++;
            }
        }
        for(int i=0;i<s.size();i++){
            s[i]=mp[s[i]];
        }
    }
    bool isIsomorphic(string s, string t) {
        pattern(s);
        pattern(t);
        return s==t ? true : false;
    }
};