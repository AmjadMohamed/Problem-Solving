// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        for(auto &it : nums)
        {
            hashMap[it]++;
            if(hashMap[it] > nums.size()/2)
            {
                return it;
            }
        }
        return -1;
    }
};