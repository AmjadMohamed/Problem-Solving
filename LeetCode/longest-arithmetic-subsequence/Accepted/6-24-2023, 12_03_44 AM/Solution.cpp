// https://leetcode.com/problems/longest-arithmetic-subsequence

class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        unordered_map<int , unordered_map<int,int>> dp;
        int diff = 0 ;
        int res = 2;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            for(int j = 0 ; j < i ; j ++)
            {
                diff = nums[j] - nums[i];
                if(dp[j].count(diff))
                {
                    dp[i][diff] = dp[j][diff] + 1;
                }
                else
                {
                    dp[i][diff] = 2;
                }
                res = max(res , dp[i][diff]);
            }

        }

        return res;
    }
};