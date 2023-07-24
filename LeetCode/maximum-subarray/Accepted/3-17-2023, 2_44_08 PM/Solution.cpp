// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // using kadane's algorithm
        int res = INT_MIN , temp = 0;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            temp += nums[i];
            if(res < temp)
            {
                res = temp;
            }

            if(temp < 0)
            {
                temp = 0;
            }
        }
        return res;
    }
};