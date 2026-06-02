#include <algorithm>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // find the first element that's >= target
        auto it = lower_bound(nums.begin(), nums.end(), target);

        // check if target found
        if (it != nums.end() && *it == target) {
            return distance(nums.begin(), it);
        }
        else {
            return -1;
        }
    }
};