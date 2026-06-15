class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //method 1
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(i!=nums[i]){
        //         return i;
        //     }
        // }
        // return nums.size();


        //method2
        // int sum=nums.size()*(nums.size()+1)/2;
        // int totalSum=0;
        // for(int i=0;i<nums.size();i++){
        //     totalSum+=nums[i];
        // }

        //method3
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans^=nums[i];
    }
    for(int i=0;i<=nums.size();i++){
        ans^=i;
    }
    return ans;
    }
};