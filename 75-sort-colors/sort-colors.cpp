class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int index=0;
        while(index<=j){
            if(nums[index]==0){
                swap(nums[i++],nums[index++]);
            }
            else if(nums[index]==1){
                index++;
            }
            else{
                swap(nums[j--],nums[index]);
            }
        }
        return;
    }
};