// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> tmp;
        tmp.push_back(1);
        res.push_back(tmp);
        tmp.clear();

        for(int i = 1 ; i < numRows ; i ++)
        {
            tmp.push_back(1);
            for(int j = 1 ; j < i ; j ++)
            {
                tmp.push_back(res[i-1][j-1] + res[i-1][j]);
            }
            tmp.push_back(1);
            res.push_back(tmp);
            tmp.clear();
        }
        return res;
    }
};