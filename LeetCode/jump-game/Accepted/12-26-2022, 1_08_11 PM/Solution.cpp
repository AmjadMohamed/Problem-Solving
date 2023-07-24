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
        return maxJump+1 >= nums.size();
    }
};