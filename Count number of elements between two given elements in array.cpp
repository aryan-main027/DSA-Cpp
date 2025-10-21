class Solution
{
public:
  int getCount(vector<int> &arr, int num1, int num2)
  {
    // Your code goes here.
    int n = arr.size();
    int index1 = 0, index2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == num1)
      {
        index1 = i;
        break;
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == num2)
      {
        index2 = i;
      }
    }
    if ((index2 - index1 - 1) < 0)
      return 0;
    return (index2 - index1 - 1);
  }
};
