// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> hashmap;
        unordered_set<int> hashset;
        for(int i = 0 ; i < arr.size() ; i ++)
        {
            hashmap[arr[i]]++;
        }
        for(auto it : hashmap)
        {
            if(hashset.find(it.second) != hashset.end())
            {
                return false;
            }
            hashset.insert(it.second);
        }
        return true;
    }
};