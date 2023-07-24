// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
            stack<char> stk ;
    for(int i = 0 ; i < s.size() ; i ++)
    {
        if(stk.empty())
            stk.push(s[i]);
        else
        {
            if((stk.top() == '[' && s[i] == ']') || (stk.top() == '(' && s[i] == ')')  || (stk.top() == '{' && s[i] == '}') )
                stk.pop();
            else
                stk.push(s[i]);
        }
    }
    if(stk.empty())
        return true;
    else
        return false;
    }
};