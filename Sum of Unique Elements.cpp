class Solution
{
public:
  int sumOfUnique(vector<int> &a)
  {
    sort(a.begin(), a.end());
    int n = a.size();
    vector<int> dup(n, 0);
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (a[i] == a[j])
        {
          dup[i] = a[i];
          dup[j] = a[j];
        }
      }
    }

    int sum_total = 0;
    int sum_dup = 0;
    for (int i = 0; i < dup.size(); i++)
    {
      sum_dup += dup[i];
    }

    for (int i = 0; i < n; i++)
    {
      sum_total += a[i];
    }

    return (sum_total - sum_dup);
    // return sum_total;
  }
};