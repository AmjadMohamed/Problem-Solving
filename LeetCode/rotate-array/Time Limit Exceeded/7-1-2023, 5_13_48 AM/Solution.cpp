// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k-- > 0)
        {
            int temp = nums[nums.size()-1];
            for(int i = nums.size()-1 ; i > 0 ; i --)
            {
                nums[i] = nums[i-1];
            }
            nums[0] = temp;
        }
    }
};