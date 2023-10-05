class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        vector<int> res;
        for(auto &it : nums)
        {
            hashMap[it]++;
        }
        for(auto &it : hashMap)
        {
            if(it.second > nums.size()/3)
            {
                res.push_back(it.first);
            }
        }
        return res;

    }
};