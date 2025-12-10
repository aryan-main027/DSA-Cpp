class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &mat, int x)
  {
    // code here
    int n = mat.size();
    int m = mat[0].size();
    int start = 0, end = m * n - 1;
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      int row_index = mid / m, col_index = mid % m;
      if (mat[row_index][col_index] == x)
        return true;
      else if (mat[row_index][col_index] < x)
        start = mid + 1;
      else
        end = mid - 1;
    }
    return false;
  }
};