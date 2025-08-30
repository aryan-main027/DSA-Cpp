// Smallest Number in rotated sorted array

#include <iostream>
#include <vector>
using namespace std;

int SmallestInSorted(int a[], int n)
{
  int start = 0, end = n - 1, ans = 0;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (a[0] > a[mid])
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}

int main()
{
  int a[6] = {4, 6, 8, 10, 1, 2};
  int n = 6;
  cout << "Smallest Number at inedx = " << " " << SmallestInSorted(a, n);
  return 0;
}