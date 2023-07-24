// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int indx = -1;
        int l = 0 , r = 0;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            l = 0 , r = 0;
            for(int j = 0 ; j < i ; j ++)
            {
                l += nums[j];
            }

            for(int k = i+1 ; k < nums.size() ; k ++)
            {
               r += nums[k];
            }

            if(l == r)
            {
                 indx = i;
                 break;
             }
        }
        return indx;
    }
};