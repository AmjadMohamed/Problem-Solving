// https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(),nums.end(),val) , nums.end());
        int cnt = 0;
        for(auto it : nums)
        {
            if(it == val)
                cnt ++;
        }
        return nums.size() - cnt;
    }
};