// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        long long res = 0;
        for(int i = 0 ; i < mat.size() ; i ++)
        {
            for(int j = 0 ; j < mat[0].size() ; j ++)
            {
                res += mat[i++][j];
            }
        }

        for(int i = 0 ; i < mat.size() ; i ++)
        {
            for(int j = mat[0].size()-1 ; j >= 0 ; j --)
            {
                //cout << mat[i++][j] << endl;
                res += mat[i++][j];
            }
        }
        // big brain return that I will not remember anything from later
        return mat.size()*mat[0].size()%2 == 0 ? res : res - mat[mat.size()/2][mat[0].size()/2];
    }
};