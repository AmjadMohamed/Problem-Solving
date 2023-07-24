// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0 , r = matrix.size() , mid = 0 , CandidateRow = 0;
        // binary search to find the candidate row based on the first column numbers 
        while(l < r)
        {
            mid = l + (r-l)/2;
            if(target < matrix[mid][0])
            {
                r = mid;
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

        CandidateRow = l;
        if(CandidateRow > 0)
            CandidateRow--;
        l = 0 , r = matrix[CandidateRow].size() , mid = 0;

        // binary search on the candidate row
        while(l < r)
        {
            mid = l + (r-l)/2;
            if(target < matrix[CandidateRow][mid])
            {
                r = mid - 1;
            }
            else if(target > matrix[CandidateRow][mid])
            {
                l = mid + 1;
            }
            else
            {
                return true;
            }
        }

        if(r < matrix[CandidateRow].size() && r > 0)
        {
            if(matrix[CandidateRow][r] == target)
            {
                return true;
            }
        }

        else if(l > 0 && l < matrix[CandidateRow].size())
        {
            if(matrix[CandidateRow][l] == target)
            {
                return true;
            }
        }
        
        return false;
    }
};