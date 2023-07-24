// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        string word;
        istringstream iss(s);
        stack<string> stk;

        while(iss >> word)
        {
            stk.push(word);
        }

        ostringstream oss;
        while(!stk.empty())
        {
            oss << stk.top() << " ";
            stk.pop();
        }
        s = oss.str();
        s.pop_back();
        return s;
    }
};