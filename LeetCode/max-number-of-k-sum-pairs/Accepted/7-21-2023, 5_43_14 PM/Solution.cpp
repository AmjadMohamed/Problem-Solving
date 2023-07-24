// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res = 0;
        int l = 0 , r = nums.size()-1;
        sort(nums.begin() , nums.end());
        while(l < r)
        {
            if(nums[l] + nums[r] == k)
            {
                l ++ ;
                r -- ;
                res ++;
            }
            else if(nums[l] + nums[r] > k)
            {
                r --;
            }
            else if(nums[l] + nums[r] < k)
            {
                l ++;
            }
        }
        return res;
    }
};