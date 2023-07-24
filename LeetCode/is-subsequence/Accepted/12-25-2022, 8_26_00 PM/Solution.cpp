// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
       int cnt = 0;
       int StartNum = 0;
       for(int i = 0 ; i < s.size() ; i ++)
       {
           for(int j = StartNum ; j <= t.size() ; j ++)
           {
               if(s[i] == t[j])
               {
                   StartNum = j + 1;
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