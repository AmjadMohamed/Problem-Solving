// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int> HashMap;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            HashMap[s[i]]++;
        }

        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(HashMap[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};