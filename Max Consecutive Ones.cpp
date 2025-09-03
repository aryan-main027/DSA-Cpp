class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0, currentCount = 0;
        
        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }
        
        return maxCount;
    }
};


// Extra 
// vector<int> nums = {1, 0, 1, 1, 0, 1};

// for (int num : nums) {
//     cout << num << " ";
// }

// vector<int> nums = {1, 0, 1, 1, 0, 1};

// for (int num : nums) {
//     cout << num << " ";
// }
// Above both loop are same 
