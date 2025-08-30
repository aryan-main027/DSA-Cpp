// Peak Index Number

#include <iostream>
#include <vector>
using namespace std;
int PeakIndex(int a[], int n)
{
  int start = 0, end = n - 1;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (a[mid - 1] < a[mid] && a[mid] > a[mid + 1])
    {
      return mid;
    }
    else if (a[mid - 1] < a[mid] && a[mid + 1] > a[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
}
int main()
{
  int a[7] = {0, 1, 0};
  int n = 3;
  //  return index = 4;
  cout << "Peak Index = " << " " << PeakIndex(a, n);
  return 0;
}