class Solution
{
public:
  void rotateMatrix(vector<vector<int>> &matrix)
  {
    // code here
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row - 1; i++)
    {
      for (int j = i + 1; j < col; j++)
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
    for (int i = 0; i < row; i++)
    {
      int start = 0, end = row - 1;
      while (start < end)
      {
        swap(matrix[start][i], matrix[end][i]);
        start++, end--;
      }
    }
  }
};
