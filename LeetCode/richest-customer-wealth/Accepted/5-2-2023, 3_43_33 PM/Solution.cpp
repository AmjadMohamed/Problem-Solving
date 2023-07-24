// https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp = 0 ;
        int sum = 0;
        for(int i = 0 ; i < accounts.size() ; i ++)
        {
            for(int j = 0 ; j < accounts[i].size() ; j ++)
            {
                temp += accounts[i][j];
            }
            sum = max(sum , temp);
            temp = 0;
        }
        return sum ;
    }
};