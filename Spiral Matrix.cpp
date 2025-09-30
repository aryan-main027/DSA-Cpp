class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) return ans; // Handle empty matrix

        int row = matrix.size(), c = matrix[0].size();
        int t = 0, r = c - 1, b = row - 1, l = 0;

        while (l <= r && t <= b) {
            // Print top row (left to right)
            for (int i = l; i <= r; i++) {
                ans.push_back(matrix[t][i]);
            }
            t++; // Update top boundary after traversal

            if (t > b) break; // Check if boundaries have collapsed

            // Print right column (top to bottom)
            for (int i = t; i <= b; i++) {
                ans.push_back(matrix[i][r]);
            }
            r--; // Update right boundary after traversal

            if (l > r) break; // Check if boundaries have collapsed

            // Print bottom row (right to left)
            for (int i = r; i >= l; i--) {
                ans.push_back(matrix[b][i]);
            }
            b--; // Update bottom boundary after traversal

            if (t > b) break; // Check if boundaries have collapsed

            // Print left column (bottom to top)
            for (int i = b; i >= t; i--) {
                ans.push_back(matrix[i][l]);
            }
            l++; // Update left boundary after traversal
        }
        return ans;
    }
};