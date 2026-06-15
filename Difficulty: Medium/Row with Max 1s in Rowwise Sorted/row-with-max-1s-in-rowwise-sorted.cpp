class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxOne=0;
        int row=-1;
        for(int i=0;i<arr.size();i++){
            int ones=0;
            for(int j=0;j<arr[0].size();j++){
                if(arr[i][j]==1){
                    ones++;
                }
            }
            if(ones>maxOne){
                row=i;
                maxOne=ones;
            }
        }
        return row;
    }
};