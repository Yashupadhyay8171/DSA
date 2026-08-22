class Solution {
    static String decToBinary(int n) {
        // code here
        StringBuilder ans=new StringBuilder();
        while(n>0){
            ans.append(n%2);
            n/=2;
        }
        ans.reverse();
        return ans.toString();
    }
}