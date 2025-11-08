class Solution
{
public:
  int splitArray(vector<int> &nums, int k)
  {
    int n = nums.size();
    int start = *max_element(nums.begin(), nums.end());
    int end = accumulate(nums.begin(), nums.end(), 0);

    int ans = end;
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      int curr_sum = 0, splits = 1;
      for (int i = 0; i < n; i++)
      {
        if (curr_sum + nums[i] > mid)
        {
          splits++;
          curr_sum = nums[i];
        }
        else
        {
          curr_sum += nums[i];
        }
      }
      if (splits <= k)
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
