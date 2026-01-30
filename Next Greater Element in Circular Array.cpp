class Solution
{
public:
  vector<int> nextGreater(vector<int> &arr)
  {
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n, -1);

    // Iterate 2*n times to simulate traversing the array twice
    for (int i = 0; i < 2 * n; i++)
    {
      // Use modulo (i % n) to access elements circularly
      while (!st.empty() && arr[st.top()] < arr[i % n])
      {
        ans[st.top()] = arr[i % n];
        st.pop();
      }

      // Only push indices from the first pass (0 to n-1) onto the stack
      // We don't need to find the next greater element FOR the second pass elements
      if (i < n)
      {
        st.push(i);
      }
    }
    return ans;
  }
};