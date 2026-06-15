class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        //Method1
        // while(n>0){
        //     n=n&(n-1);
        //     count++;
        // }/
        
        //method2
        while(n>0){
            int digit=n&1;
            if(digit==1){
                count++;
            }
            n=n>>1;
        }


        return count;
    }
};