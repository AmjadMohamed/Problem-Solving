// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int indx = -1;
        int leftsum = 0 , sum = 0;
        for(auto it : nums)
        {
            sum += it;
        }
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(sum - leftsum - nums[i] != leftsum)
            {
                leftsum += nums[i];
            }
            else
            {
                indx = i;
                break;
            }
        }
        return indx;
    }
};