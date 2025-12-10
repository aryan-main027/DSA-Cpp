class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int start = 0 , end = m-1;
        while(start<n && m>=0){
            if(mat[start][end] == x)
                return true;
            else if(mat[start][end] > x)
                end--;
            else 
                start++;
        }
        return false;
    }
};