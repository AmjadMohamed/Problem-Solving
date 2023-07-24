// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroPos = 0 ;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(nums[i] != 0)
            {
                nums[lastNonZeroPos] = nums[i];
                lastNonZeroPos ++;
            }

            for(int i = 0 ; i < nums.size() ; i ++)
            {
                cout << nums[i] << " ";
            }
            cout << endl;
        }
        for(int i = lastNonZeroPos ; i < nums.size() ; i ++)
        {
            nums[i] = 0;
        }
    }
};