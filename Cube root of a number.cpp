class Solution
{
public:
  int cubeRoot(int n)
  {
    // code here
    int start = 1;
    int end = n;
    int ans = n;
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      if (mid == (n / (mid * mid)))
      {
        return mid;
      }
      else if (mid > (n / (mid * mid)))
      {
        ans = mid;
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
    return ans - 1;
  }
};