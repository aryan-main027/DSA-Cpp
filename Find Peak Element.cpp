class Solution
{
public:
  int findPeakElement(vector<int> &arr)
  {
    int n = arr.size();
    int start = 0, end = n - 1;
    if (n == 0)
    {
      return 0;
    }
    while (start <= end)
    {
      int mid = start + (end - start) / 2;

      bool leftOK = (mid == 0 || arr[mid] > arr[mid - 1]);
      bool rightOK = (mid == n - 1 || arr[mid] > arr[mid + 1]);

      if (leftOK && rightOK)
      {
        return mid; // Found a peak
      }
      else if (mid < n - 1 && arr[mid] < arr[mid + 1])
      {
        start = mid + 1; // Peak must be on the right
      }
      else
      {
        end = mid - 1; // Peak is on the left
      }
    }
    return 0;
  }
};