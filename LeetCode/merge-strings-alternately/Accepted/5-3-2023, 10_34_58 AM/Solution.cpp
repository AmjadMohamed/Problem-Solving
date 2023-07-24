// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int indx1 = 0 , indx2 = 0;
        string res;
        while(indx1+indx2 < word1.size() + word2.size())
        {
            if(indx1 < word1.size())
                res += word1[indx1++];
            if(indx2 < word2.size())
                res += word2[indx2++];
        }
        return res;
    }
};