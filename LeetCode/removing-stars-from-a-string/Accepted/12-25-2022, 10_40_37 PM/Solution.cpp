// https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
            }
            else
            {
                if(s[i] == '*')
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
        }
        string res = "";
        while(!stk.empty())
        {
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin() , res.end());
        return res;
    }
};