// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp;
        vector<int> res;
        dp.push_back({1});
        for(int i = 1 ; i < rowIndex+1 ; i ++)
        {
            res.push_back(1);
            for(int j = 1 ; j < i ; j ++)
            {
                res.push_back(dp[i-1][j-1] + dp[i-1][j]);
            }
            res.push_back(1);
            dp.push_back(res);
            res.clear();
        }
        return dp[rowIndex];
    }
};