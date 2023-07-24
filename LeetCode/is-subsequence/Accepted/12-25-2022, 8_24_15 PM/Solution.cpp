// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
       int cnt = 0;
       int StartNum = t.size()-1;
       for(int i = s.size()-1 ; i >= 0 ; i --)
       {
           for(int j = StartNum ; j >= 0 ; j --)
           {
               if(s[i] == t[j])
               {
                   StartNum = j - 1;
                   cnt ++;
                   break;
               }
           }
       }

       if(cnt == s.size())
       {
           return true;
       }
       else
       {
           return false;
       }
    }
};