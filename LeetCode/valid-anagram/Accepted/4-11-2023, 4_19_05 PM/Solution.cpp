// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sCnt;
        unordered_map<char,int> tCnt;

        for(char c : s)
        {
            sCnt[c]++;
        }

        for(char c : t)
        {
            tCnt[c]++;
        }

        if(sCnt == tCnt)
        {
            return true;
        }
        return false;
    }
};