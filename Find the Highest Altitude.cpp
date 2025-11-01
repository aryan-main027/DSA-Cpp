class Solution
{
public:
  int largestAltitude(vector<int> &gain)
  {
    int n = gain.size();
    int max_alti = 0;
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
      max_alti += gain[i];
      ans[i + 1] = max_alti;
    }
    int x = 0;
    for (int i = 0; i < n + 1; i++)
    {
      x = max(ans[i], x);
    }

    return x;
  }
};