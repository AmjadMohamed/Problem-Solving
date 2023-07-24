// https://leetcode.com/problems/monotonic-array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isInc = false;
        bool isDec = false;
        for(int i = 0 ; i < nums.size()-1 ; i ++)
        {
            if(nums[i] > nums[i+1])
            {
                isDec = true;
                if(isInc)
                {
                    return false;
                }
            }
            else if(nums[i] < nums[i+1])
            {
                isInc = true;
                if(isDec)
                {
                    return false;
                }
            }
        }
        return true;
    }
};