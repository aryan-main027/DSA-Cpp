class Solution
{
public:
  int arrangeCoins(int n)
  {
    int i = 1, count = 0;
    while (n)
    {
      if (i <= n)
      {
        n = n - i;
        count++;
        i++;
      }
      else
      {
        break;
      }
    }

    return count;
  }
};