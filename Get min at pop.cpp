stack<int> _push(int arr[], int n)
{
  // code here
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
      s.push(arr[i]);
    else
    {
      s.push(min(arr[i], s.top()));
    }
  }
  return s;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s)
{

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
}