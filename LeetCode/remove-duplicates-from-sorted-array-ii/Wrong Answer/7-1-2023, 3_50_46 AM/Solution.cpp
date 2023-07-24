// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unq = 1;
        int count = 1;
        for(int i = 1 ; i < nums.size() ; i ++)
        {
            if(nums[i-1] != nums[i] || count < 2)
            {
                nums[unq++] = nums[i];
                count ++;
            }
            else if(count >= 2)
            {
                count = 1;
            }
        } 
        return unq;
    }
};