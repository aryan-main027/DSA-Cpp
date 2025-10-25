class Solution
{
public:
  void subSeq(vector<int> &nums, int i, int n, vector<int> &temp, vector<vector<int>> &ans)
  {
    if (i == n)
    {
      ans.push_back(temp); // Add the current subset to the result
      return;
    }

    // Exclude the current element and move to the next index
    subSeq(nums, i + 1, n, temp, ans);

    // Include the current element and move to the next index
    temp.push_back(nums[i]);
    subSeq(nums, i + 1, n, temp, ans);
    temp.pop_back(); // Backtrack by removing the current element
  }

  vector<vector<int>> subsets(vector<int> &nums)
  {
    int n = nums.size();
    vector<vector<int>> ans;
    vector<int> temp;
    subSeq(nums, 0, n, temp, ans);
    return ans;
  }
};