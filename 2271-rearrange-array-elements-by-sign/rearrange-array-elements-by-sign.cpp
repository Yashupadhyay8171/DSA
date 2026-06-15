class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>arr(nums.size(),0);
        int pos=0;
        int neg=1;
        for(auto it:nums){
            if(it>0){
                arr[pos]=it;
                pos+=2;
            }
            else{
                arr[neg]=it;
                neg+=2;
            }
        }
        return arr;
    }
};