// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<char> s1;
        set<char> s2;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            s1.insert(s[i]);
        }

        for(int i = 0 ; i < t.size() ; i ++)
        {
            s2.insert(t[i]);
        }

        if(s1.size() == s2.size())
            return true;
        else
            return false;
    }
};