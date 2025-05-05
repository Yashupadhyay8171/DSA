class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int n=(ans.size());
        if((n&1)==0){
            return (ans[(n-1)/2]+ans[(n-1)/2+1])/(double)2;
        }
        return ans[n/2];
    }
};