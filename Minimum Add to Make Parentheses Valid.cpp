class Solution
{
public:
  int minAddToMakeValid(string arr)
  {
    int n = arr.size();
    stack<char> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == '(')
        s.push(arr[i]);

      else
      {
        if (s.empty())
          count++;
        else
          s.pop();
      }
    }
    return s.size() + count;
  }
};