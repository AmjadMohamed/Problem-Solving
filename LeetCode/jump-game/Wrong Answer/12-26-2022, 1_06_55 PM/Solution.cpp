// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxJump = 0;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(i + nums[i] >= maxJump && maxJump >= i)
            {
                maxJump = i + nums[i];
            }
        }
        if(nums.size() == 1)
            return true;
        else
            return maxJump >= nums.size();
    }
};