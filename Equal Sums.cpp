
class Solution
{
public:
  // Function to find the equal sum partition.
  vector<int> EqualSum(vector<int> arr)
  {
    // Complete the function
    int n = arr.size();
    int prefix = 0, mini = INT_MAX, flag = -1, pos = -1;
    int total = 0;
    for (int i = 0; i < arr.size(); i++)
      total += arr[i];

    for (int i = 0; i < arr.size(); i++)
    {
      prefix += arr[i];
      int diff = total - 2 * prefix;
      int currdiff = abs(diff);

      if (currdiff < mini)
      {
        mini = currdiff;
        pos = i;
        if (diff < 0)
          flag = 1;
        else
          flag = 0;
      }
      else if (currdiff > mini)
        break;
    }

    vector<int> ans = {mini, pos + 2, flag};
    return ans;
  }
};