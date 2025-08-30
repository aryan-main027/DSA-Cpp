// Kth Postive Number

#include <iostream>
#include <vector>
using namespace std;

int Kthpositivenumber(int a[], int n, int k)
{
  int start = 0, end = n - 1, index = n;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (a[mid] - mid + 1 > k)
    {
      index = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return index + k;
}
int main()
{
  int a[4] = {1, 2, 3, 4};
  int n = 4;
  int key = 2;
  // output is 6
  cout << "Kth Missing Number is : " + key << " " << Kthpositivenumber(a, n, key);
  return 0;
}