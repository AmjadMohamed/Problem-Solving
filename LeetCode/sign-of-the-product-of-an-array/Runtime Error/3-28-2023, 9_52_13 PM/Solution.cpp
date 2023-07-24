// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long res = 1;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            res *= nums[i];
        }
        if(res > 0)
        {
            return 1;
        }
        else if(res < 0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
};