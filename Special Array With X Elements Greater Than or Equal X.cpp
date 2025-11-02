class Solution
{
public:
  int specialArray(vector<int> &nums)
  {
    int n = nums.size();
    for (int X = 1; X <= n; X++)
    {
      // Count how many elements are >= X
      int count = 0;
      for (int num : nums)
      {
        if (num >= X)
        {
          count++;
        }
      }
      if (count == X)
      {
        return X;
      }
    }
    return -1;
  }
};