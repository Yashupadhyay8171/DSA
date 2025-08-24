class Solution {
  public:
    int solve(int a,int b){
        while(a>0&&b>0){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return max(a,b);
    }
    int lcm(int a, int b) {
        // code here
        int ans=solve(a,b);
        return (a*b)/ans;
    }
};