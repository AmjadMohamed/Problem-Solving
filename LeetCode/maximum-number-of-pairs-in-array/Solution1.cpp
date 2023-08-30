class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> res(2,0);
        
        unordered_map<int,int> hash;
        for(auto &it : nums)
        {
            hash[it]++;
        }
        for(auto &it : hash)
        {
            res[0] += it.second/2;
            if(it.second % 2 != 0)
            {
                res[1]++;
            }
        }
        return res;
    }
};