class Solution {
public:
    long long f(vector<int>&nums,vector<int>&cost,int x){
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=1LL*abs(nums[i]-x)*cost[i];
        }
        return ans;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int s=1;
        int e=1e6;
        long long ans=1e16;
        while(s<=e){
            int mid=(s+e)>>1;
            long long a=f(nums,cost,mid);
            long long b=f(nums,cost,mid+1);
            ans=min({ans,a,b});
            if(a>b){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};