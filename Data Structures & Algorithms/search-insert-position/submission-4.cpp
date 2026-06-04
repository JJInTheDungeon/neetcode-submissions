class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, r = nums.size() - 1;
        while (i <= r) {
            int mid = (i + r) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                r = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return i;
    }
};