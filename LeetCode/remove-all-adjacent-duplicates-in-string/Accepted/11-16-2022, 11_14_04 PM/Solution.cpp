// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

class Solution {
public:
    string removeDuplicates(string s) {
                deque<char> dq;
    for(int i = 0 ; i < s.size() ; i ++)
    {
        if(dq.empty())
            dq.push_back(s[i]);
        else
        {
            if(dq.back() == s[i])
                dq.pop_back();
            else
                dq.push_back(s[i]);
        }
    }
    string res = "";
    for(auto it : dq)
        res += it;
    return res;
    }
};