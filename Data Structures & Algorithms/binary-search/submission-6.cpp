class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, mid = 0;

        while (low <= high) {
            // calculate mid index safely to prevent int overflow
            mid = low + (high - low) / 2;
            
            // case 1: target found
            if (nums[mid] == target) {
                return mid;
            }

            // case 2: mid value is too small
            else if (nums[mid] < target) {
                low = mid + 1;
            }

            // case 3: mid value is too big
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
};