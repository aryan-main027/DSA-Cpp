class Solution
{
public:
  int partition(vector<int> &a, int start, int end)
  {
    int pos = start;
    for (int i = start; i <= end; i++)
    {
      if (a[i] <= a[end])
      {
        swap(a[i], a[pos]);
        pos++;
      }
    }

    return pos - 1;
  }

  void quickSort(vector<int> &a, int start, int end)
  {
    if (start >= end)
      return;

    int pivot = partition(a, start, end);
    // left side
    quickSort(a, start, pivot - 1);
    // right side
    quickSort(a, pivot, end);
  }
  vector<int> sortArray(vector<int> &nums)
  {
    int n = nums.size();
    int start = 0, end = n - 1;
    quickSort(nums, start, end);
    return nums;
  }
};