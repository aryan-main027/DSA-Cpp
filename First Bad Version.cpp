// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
  int firstBadVersion(int n)
  {
    if (n == 0 || n == 1)
      return n;
    int start = 1, end = n, ans = n;
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      int res = isBadVersion(mid);
      if (res)
      {
        ans = mid;
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
    return ans;
  }
};