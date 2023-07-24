// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        for(auto it : nums)
        {
            hashMap[it] ++;
            if(hashMap[it] > 1)
            {
                return true;
            }
        }
        return false;
    }
};