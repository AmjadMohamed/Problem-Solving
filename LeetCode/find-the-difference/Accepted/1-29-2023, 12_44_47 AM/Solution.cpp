// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int AsciiS = 0;
        int AsciiT = 0;

        for(int i = 0 ; i < s.size() ; i ++)
        {
            AsciiS += s[i];
        }

        for(int i = 0 ; i < t.size() ; i ++)
        {
            AsciiT += t[i];
        }

        return (char)AsciiT - AsciiS;
    }
};