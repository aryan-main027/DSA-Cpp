#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int a[5] = {7, 4, 8, 5, 3};
  int n = 5;

  // Accending Order
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        swap(a[i], a[j]);
      }
    }
  }

  // Decending Order
  //   for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if (a[i] < a[j])
  //     {
  //       swap(a[i], a[j]);
  //     }
  //   }
  // }

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}

// Time Complexity of this sorting method is O(n^2)