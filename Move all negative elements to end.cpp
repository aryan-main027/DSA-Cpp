class Solution
{
public:
  void segregateElements(vector<int> &arr)
  {
    // Your code goes here
    int j = 0;
    vector<int> dup(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] >= 0)
      {
        dup[j] = arr[i];
        j++;
      }
    }

    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] < 0)
      {
        dup[j] = arr[i];
        j++;
      }
    }

    for (int i = 0; i < arr.size(); i++)
    {
      arr[i] = dup[i];
    }
  }
};