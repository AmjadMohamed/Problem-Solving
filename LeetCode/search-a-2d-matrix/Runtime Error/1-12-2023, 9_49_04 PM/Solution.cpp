// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0 , r = matrix.size() , mid = 0 , PreferredRow = 0;
        // binary search to find the candidate row based on the first column numbers 
        while(l <= r)
        {
            mid = (l+r)/2;
            if(target < matrix[mid][0])
            {
                r = mid-1;
            }
            else if(target > matrix[mid][0])
            {
                l = mid + 1;
            }
            else
            {
                return true;
            }
        }

        PreferredRow = mid;
        l = 0 , r = matrix[mid].size() , mid = 0;

        while(l <= r)
        {
            mid = (l+r)/2;
            if(target < matrix[PreferredRow][mid])
            {
                r = mid - 1;
            }
            else if(target > matrix[PreferredRow][mid])
            {
                l = mid + 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};