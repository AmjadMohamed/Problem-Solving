// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int , char> mp;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            mp[indices[i]] = s[i];
        }
        string res = "";
        for(auto it : mp)
            res += it.second;
        return res;
    }
};