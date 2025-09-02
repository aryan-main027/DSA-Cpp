class Solution
{
public:
  int shipWithinDays(vector<int> &a, int k)
  {
    int n = a.size();
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++)
    {
      start = max(start, a[i]);
      end += a[i];
    }

    while (start <= end)
    {
      mid = start + (end - start) / 2;
      int length = 0, count = 1;
      for (int i = 0; i < n; i++)
      {
        length += a[i];
        if (length > mid)
        {
          length = a[i];
          count++;
        }
      }

      if (count <= k)
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