// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos = 0;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            bool exists = false;
            for(int j = 0; j < t.size() ; j ++)
            {
                if(s[i] == t[j])
                {
                    if(j < pos)
                    {
                        break;
                    }
                    exists = true;
                    pos = j;
                    break;
                }
            }

            if(!exists)
                return false;
        }
        return true;
    }
};