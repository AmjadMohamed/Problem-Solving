// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hSize = haystack.size();
        int nSize = needle.size();
        for(int i = 0 ; i <= hSize - nSize ; i ++)
        {
            //cout << i << endl;
            if(haystack.substr(i , nSize) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};