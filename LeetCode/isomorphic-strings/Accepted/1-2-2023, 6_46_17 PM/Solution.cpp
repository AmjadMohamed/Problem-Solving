// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char> sTOt;
        unordered_map<char , char> tTOs;

        for(int i = 0 ; i < s.size() ; i ++)
        {
            sTOt[s[i]] = t[i];
            tTOs[t[i]] = s[i];
        }

        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(!(sTOt[s[i]] == t[i] && tTOs[t[i]] == s[i]))
            {
                return false;
            }
        }
        return true;
    }
};