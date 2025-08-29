#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int a[6] = {10, 8, 2, 3, 1, 4};
  int n = 6;

  //  Decending Order
  for (int i = 0; i < n; i++)
  {
    int index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] > a[index])
      {
        index = j;
      }
    }
    swap(a[i], a[index]);
  }

  // Accending order
  for (int i = 0; i < n; i++)
  {
    int index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] > a[index])
      {
        index = j;
      }
    }
    swap(a[i], a[index]);
  }

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}

// Time Complexity of this sorting method is O(n^2)