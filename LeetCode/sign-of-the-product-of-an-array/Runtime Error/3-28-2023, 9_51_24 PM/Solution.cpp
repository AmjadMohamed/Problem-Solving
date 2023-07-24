// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        for(int i = 1 ; i < nums.size() ; i ++)
        {
            nums[i] *= nums[i-1];
        }
        if(nums[nums.size()-1] > 0)
        {
            return 1;
        }
        else if(nums[nums.size()-1] < 0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
};