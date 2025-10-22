class Solution
{
public:
  int searchInsert(vector<int> &a, int x)
  {
    int n = a.size();
    int index = a.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      if (a[mid] == x)
      {
        return mid;
      }
      else if (a[mid] > x)
      {
        index = mid;
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }

    return index;
  }
};