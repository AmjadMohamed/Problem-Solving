// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();
    for (int i = 0; i <= n - m; i++) {
        if (haystack.substr(i, m) == needle) {
            return i;
        }
    }
    return -1;
    }
};