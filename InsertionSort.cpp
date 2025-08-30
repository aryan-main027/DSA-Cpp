#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int a[5] = {7, 4, 2, 3, 5};
  int n = 5;
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (a[j] < a[j - 1])
      {
        swap(a[j - 1], a[j]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}

// Time Complexity of this sorting method is O(n^2)