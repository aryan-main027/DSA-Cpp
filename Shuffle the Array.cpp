class Solution
{
public:
  vector<int> shuffle(vector<int> &nums, int n)
  {
    int size = 2 * n;
    vector<int> ans(size);
    int i = 0, j = n, a = 0;

    while (i < n && j < size)
    {
      ans[a++] = nums[i++]; // take from first half
      ans[a++] = nums[j++]; // take from second half
    }

    return ans;
  }
};
