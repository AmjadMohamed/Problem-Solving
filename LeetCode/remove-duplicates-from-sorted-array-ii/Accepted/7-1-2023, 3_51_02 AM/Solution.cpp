// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unq = 1;
        unordered_map<int,int> hash;
        hash[nums[0]]++;
        for(int i = 1 ; i < nums.size() ; i ++)
        {
            if(nums[i-1] != nums[i] || hash[nums[i]] < 2)
            {
                nums[unq++] = nums[i];
                hash[nums[i]]++;
            }
        } 
        return unq;
    }
};