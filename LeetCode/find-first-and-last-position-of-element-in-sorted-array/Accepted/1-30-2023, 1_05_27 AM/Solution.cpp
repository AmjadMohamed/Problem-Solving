// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2);
        res[0] = -1;
        res[1] = -1;
        if(binary_search(nums.begin() , nums.end() , target))
        {
            res[0] = lower_bound(nums.begin() , nums.end() , target) - nums.begin();
            res[1] = upper_bound(nums.begin() , nums.end() , target) - nums.begin() - 1;
        }
        return res;
    }
};