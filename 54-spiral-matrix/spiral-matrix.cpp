class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int i=arr.size();
        int j=arr[0].size();
        int total=i*j;
        int sr=0;
        int er=i-1;
        int sc=0;
        int ec=j-1;
        int count =0;
        vector<int>ans;
        while(count<total){
            for(int i=sc;i<=ec&&count<total;i++){
                ans.push_back(arr[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr;i<=er&&count<total;i++){
                ans.push_back(arr[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec;i>=sc&&count<total;i--){
                ans.push_back(arr[er][i]);
                count++;
            }
            er--;
            for(int i=er;i>=sr&&count<total;i--){
                ans.push_back(arr[i][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
};