class Solution {
public:
    void rotate(vector<vector<int>>& matrinx) {
    for(int i=0;i<matrinx.size();i++){
    for(int j=i;j<matrinx.size();j++){
            swap(matrinx[i][j],matrinx[j][i]);
        }
    }
    for(int i=0;i<matrinx.size();i++){
        reverse(matrinx[i].begin(),matrinx[i].end());
    }
    return;
    }
};