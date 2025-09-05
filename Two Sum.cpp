class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n = a.size();
        int start = 0, end = n - 1;
        while (start < end) {
            if (a[start] + a[end] == k) {
                break;
            } else if (a[start] + a[end] < k) {
                start++;
            } else {
                end--;
            }
        }

        return {start+1, end+1};
    }
};
