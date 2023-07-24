// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        bool StartCount = false;
        int lengthCnt = 0;
        for(int i = s.size()-1 ; i >= 0 ; i --)
        {
            if(isalpha(s[i]))
            {
                StartCount = true;
            }
            if(StartCount)
            {
                if(isalpha(s[i]))
                {
                    lengthCnt ++;
                }
                else
                {
                    break;
                }
            }
        }
        return lengthCnt;
    }
};