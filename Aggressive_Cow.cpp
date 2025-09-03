class Solution
{
public:
  int aggressiveCows(vector<int> &a, int k)
  {
    // code here
    sort(a.begin(), a.end());
    int n = a.size();
    if (n < k)
    {
      return -1;
    }

    int start = 1, end = a[n - 1] - a[0], ans, mid;

    while (start <= end)
    {
      mid = start + (end - start) / 2;
      int count = 1, pos = a[0];
      for (int i = 0; i < n; i++)
      {
        if (pos + mid <= a[i])
        {
          count++;
          pos = a[i];
        }
      }

      if (count >= k)
      {
        ans = mid;
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
    return ans;
  }
};