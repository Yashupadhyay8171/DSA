class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int add1=1;
        int i=digits.size()-1;
        vector<int>ans;
        while(i>=0){
            int single=digits[i]+add1+carry;
            ans.push_back(single%10);
            carry=single/10;
            add1=0;
            i--;
        }
        if(carry){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};