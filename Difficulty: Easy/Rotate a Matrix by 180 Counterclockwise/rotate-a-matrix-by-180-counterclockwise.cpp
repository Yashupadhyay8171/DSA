
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // Code here
        int ROWS=matrix.size();
        int COLS=matrix[0].size();
    for (int i = 0; i < ROWS / 2; ++i) {
        for (int j = 0; j < COLS; ++j) {
            swap(matrix[i][j], matrix[ROWS - 1 - i][j]);
        }
    }
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS / 2; ++j) {
            swap(matrix[i][j], matrix[i][COLS - 1 - j]);
        }
    }
    }
};