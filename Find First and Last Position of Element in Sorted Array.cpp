class Solution
{
public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    vector<int> ans(2);
    int i = -1, j = -1;
    int n = nums.size();
    int start = 0, end = n - 1;
    // first position
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      if (nums[mid] == target)
      {
        i = mid;
        end = mid - 1;
      }
      else if (nums[mid] > target)
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }

    start = 0, end = n - 1;

    // last Occurance
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      if (nums[mid] == target)
      {
        j = mid;
        start = mid + 1;
      }
      else if (nums[mid] > target)
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }

    ans[0] = i;
    ans[1] = j;
    return ans;
  }
};