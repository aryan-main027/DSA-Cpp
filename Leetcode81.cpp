bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            // If we found the target, return true
            if (nums[mid] == target) {
                return true;
            }

            // If we can't decide which side is sorted due to duplicates, just
            // move left and right
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
            // Left side is sorted
            else if (nums[left] <= nums[mid]) {
                // Check if the target is within the sorted left half
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // Right side is sorted
            else {
                // Check if the target is within the sorted right half
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }