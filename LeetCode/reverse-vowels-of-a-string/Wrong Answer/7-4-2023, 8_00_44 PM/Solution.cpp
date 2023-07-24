// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
        stack<char> vowelsInString;
        string vowels = "aeiou";
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(vowels.find(s[i]) != string::npos)
            {
                vowelsInString.push(s[i]);
            }
        }

        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(vowels.find(s[i]) != string::npos)
            {
                s[i] = vowelsInString.top();
                vowelsInString.pop();
            }
        }
        return s;
    }
};