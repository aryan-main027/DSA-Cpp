
class Solution
{
public:
  void merge(vector<int> &nums, int start, int mid, int end)
  {
    vector<int> temp(end - start + 1, 0);
    int left = start, right = mid + 1, index = 0;
    // sorting the array and storing top new array temp
    while (left <= mid && right <= end)
    {
      if (nums[left] <= nums[right])
      {
        temp[index] = nums[left];
        index++, left++;
      }
      else
      {
        temp[index] = nums[right];
        index++, right++;
      }
    }

    // checking if array is get completely empty or not
    while (left <= mid)
    {
      temp[index] = nums[left];
      index++, left++;
    }
    while (right <= end)
    {
      temp[index] = nums[right];
      index++, right++;
    }

    // adding temp ele to orignal nums array

    index = 0;
    while (start <= end)
    {
      nums[start] = temp[index];
      index++, start++;
    }
  }
  void mergesort(vector<int> &nums, int start, int end)
  {
    if (start == end)
      return;

    int mid = start + (end - start) / 2;
    // left side array
    mergesort(nums, start, mid);
    // right side array
    mergesort(nums, mid + 1, end);
    // merge the array
    merge(nums, start, mid, end);
  }
  vector<int> sortArray(vector<int> &nums)
  {
    int n = nums.size();
    int start = 0, end = n - 1;
    mergesort(nums, start, end);
    return nums;
  }
};