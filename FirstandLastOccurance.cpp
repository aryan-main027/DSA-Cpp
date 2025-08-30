// First and Last Occurance

#include <iostream>
#include <vector>
using namespace std;
int FirstOccur(int a[], int n, int key)
{
  int start = 0, end = n - 1;
  int first = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (a[mid] == key)
    {
      first = mid;
      end = mid - 1;
    }
    else if (a[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return first;
}
int LastOccur(int a[], int n, int key)
{
  int start = 0, end = n - 1;
  int last = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (a[mid] == key)
    {
      last = mid;
      start = mid + 1;
    }
    else if (a[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return last;
}
int main()
{
  int a[6] = {5, 7, 7, 8, 8, 10};
  int n = 5;
  int key = 8;
  cout << "First Occurance = " << " " << FirstOccur(a, n, key) << endl
       << "Last Occurance = " << " " << LastOccur(a, n, key);
  return 0;
}