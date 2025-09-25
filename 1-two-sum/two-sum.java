class pair{
    int first=-1;
    int second=-1;
    
    pair(int first,int second){
        this.first=first;
        this.second=second;
    }
}
class Solution {
    void sort(List<pair>ls){
        Collections.sort(ls, (a, b) -> Integer.compare(a.first, b.first));
    }
    public int[] twoSum(int[] nums, int target) {
        List<pair>ls=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            pair p1=new pair(nums[i],i);
            ls.add(p1);
        }
        int ans[]=new int[2];
        sort(ls);
        int i=0;
        int j=ls.size()-1;
        while(i<j){
            if(ls.get(i).first+ls.get(j).first == target){
                ans[0]=ls.get(i).second;
                ans[1]=ls.get(j).second;
                return ans; 
            }
            else if(ls.get(i).first+ls.get(j).first < target){
                i++;
            }
            else{
                j--;
            }
        }
        return nums;
    }
}