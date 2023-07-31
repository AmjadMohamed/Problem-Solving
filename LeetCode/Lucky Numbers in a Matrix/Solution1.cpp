class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_set<int> res;
        vector<int> rowsMins;
        vector<int> colsMaxs;

        int mn;
        for(int i = 0 ; i < matrix.size() ; i ++)
        {
            mn = INT_MAX;
            for(int j = 0 ; j < matrix[0].size() ; j ++)
            {
                mn = min(mn , matrix[i][j]);
            }
            rowsMins.push_back(mn);
        }

        int mx;
        for(int i = 0 ; i < matrix[0].size() ; i ++)
        {
            mx = INT_MIN;
            for(int j = 0 ; j < matrix.size() ; j ++)
            {
                mx = max(mx , matrix[j][i]);
            }
            colsMaxs.push_back(mx);
        }

        for(int i = 0 ; i < matrix.size() ; i ++)
        {
            for(int j = 0 ; j < matrix[0].size() ; j ++)
            {
                if(matrix[i][j] == rowsMins[i] && matrix[i][j] == colsMaxs[j])
                {
                    res.insert(matrix[i][j]);
                }
            }
        }

        return vector<int>(res.begin(),res.end());
    }
};