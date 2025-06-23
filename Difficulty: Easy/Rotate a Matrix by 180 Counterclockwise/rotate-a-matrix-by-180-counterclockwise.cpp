
class Solution {
  public:
    void reverse1(vector<int>&arr){
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            swap(arr[i++],arr[j--]);
        }
    }
    void rotateMatrix(vector<vector<int>>& matrix) {
        // Code here
        int ROWS=matrix.size();
        int COLS=matrix[0].size();
    for (int i = 0; i < ROWS / 2; ++i) {
        for (int j = 0; j < COLS; ++j) {
            swap(matrix[i][j], matrix[ROWS - 1 - i][j]);
        }
    }
    for(int i=0;i<matrix.size();i++){
        reverse1(matrix[i]);
    }
    }
};