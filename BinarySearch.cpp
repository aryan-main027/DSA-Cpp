#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
  int start = 0, end = n - 1, mid;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}
int main()
{
  int n;
  int arr[5];
  int target;
  cout << "Enter Size of Array :" << " ";
  cin >> n;
  cout << "Enter the Element of Array :" << " ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the target Element :" << " ";
  cin >> target;
  cout << "Result =" << BinarySearch(arr, n, target);
  return 0;
}