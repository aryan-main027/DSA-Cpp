class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int rows = mat.size();         // Number of rows
        int cols = mat[0].size();      // Number of columns
        
        // Create a result matrix of size cols x rows
        vector<vector<int>> result(cols, vector<int>(rows));
        
        // Fill the transposed matrix
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                result[j][i] = mat[i][j];
            }
        }
        
        return result;
    }
};