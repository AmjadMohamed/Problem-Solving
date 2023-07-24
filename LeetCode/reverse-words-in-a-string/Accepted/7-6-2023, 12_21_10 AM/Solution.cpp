// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        stack<string> stk;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(s[i] == ' ')
            {
                if(temp.size() > 0)
                {
                    stk.push(temp);
                    temp = "";
                }
            }
            else
            {
                temp += s[i];
            }
        }

        if(temp.size() > 0)
        {
            stk.push(temp);
        }

        s = "";
        temp = "";
        while(!stk.empty())
        {
            temp = stk.top();
            stk.pop();
            for(int i = 0 ; i < temp.size() ; i ++)
            {
                s += temp[i];
            }
            s += ' ';
        }
        s.erase(s.end()-1);
        return s ;
    }
};