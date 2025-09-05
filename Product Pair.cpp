

class Solution {
  public:
    bool isProduct(vector<int> a, long long k) {
        // code here
        sort(a.begin() , a.end());
        long long n = a.size();
        long long start = 0, end = n - 1;
        while (start < end) {
            long long product = (long long)a[start] * a[end];
            // why product variable ? => as multiplication give output very big due to which it cause over flow and why type conversion of  (long long)a[start] * a[end]; is because array is of ing and their product exceed the range of integer which cause over flow
            if (product == k) {
                return true;
            } else if (product < k) {
                start++;
            } else {
                end--;
            }
        }

        return false;
    }
};