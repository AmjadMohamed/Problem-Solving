class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> numsCount;
        multimap<int,int> freqKeys;
        vector<int> res;
        vector<int> temp;
        int sz;

        for(auto &it : nums)
        {
            numsCount[it] ++;
        }

        for(auto &it : numsCount)
        {
            freqKeys.insert({it.second,it.first});
        }

        for(auto &it : freqKeys)
        {
            temp.push_back(it.second);
        }

        sz = temp.size()-1;

        while(k > 0)
        {
            res.push_back(temp[sz]);
            sz --;
            k --;
        }

        return res;
    }
};