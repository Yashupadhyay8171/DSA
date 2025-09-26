class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        int ans=-1;
        int maxi=-1;
        for(var entry:mp.entrySet()){
            if(maxi<entry.getValue()){
                ans=entry.getKey();
                maxi=entry.getValue();
            }
        }
        return ans;
    }
}