class Solution
{
public:
  int num(int n)
  {
    if (n <= 1)
      return n;

    return num(n - 1) + num(n - 2);
  }
  int fib(int n)
  {
    int x = num(n);
    return x;
  }
};