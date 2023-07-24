// https://leetcode.com/problems/verifying-an-alien-dictionary

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> hashMap;
        for(int i = 0 ; i < order.size(); i ++)
        {
            hashMap[order[i]] = i;
        }
        for(int i )
    }
};