// User function template for C++

class Solution
{
public:
  vector<int> factorial(int n)
  {
    // code here
    vector<int> a(1, 1);
    while (n > 1)
    {
      int carry = 0, size = a.size();
      for (int i = 0; i < size; i++)
      {
        int res = a[i] * n + carry;
        carry = res / 10;
        a[i] = res % 10;
      }
      while (carry)
      {
        a.push_back(carry % 10);
        carry /= 10;
      }

      n--;
    }

    reverse(a.begin(), a.end());
    return a;
  }
};