// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        int unq = 1;
        duplicates.push_back(nums[0]);
        for(int i = 1 ; i < nums.size() ; i ++)
        {
            if(!binary_search(nums.begin() , nums.begin()+i , nums[i]))
            {
                unq ++;
                duplicates.push_back(nums[i]);
            }
        }
        nums = duplicates;
        return unq;
    }
};