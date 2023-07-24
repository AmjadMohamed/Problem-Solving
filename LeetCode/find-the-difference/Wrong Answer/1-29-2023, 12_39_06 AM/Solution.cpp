// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i = 0 ; i < t.size() ; i ++)
        {
            if(s.find(t[i]) == string::npos)
            {
                return t[i];
            }
        }
        return t[0];
    }
};