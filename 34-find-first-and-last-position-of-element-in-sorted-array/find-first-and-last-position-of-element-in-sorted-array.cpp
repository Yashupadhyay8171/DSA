class Solution {
public:
    int findS(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    int find(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=find(nums,target);
        int sec=findS(nums,target);
        return {first,sec};
    }
};