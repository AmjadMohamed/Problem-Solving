// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;

         bool IsL = false;
         int cnt = 1;
          if(s[0] == 'L')
           {
               IsL = true;
           }

           if(IsL)
          {
              for(int i = 1 ; i < s.size() ; i ++)
             {
                 if(s[i] == 'L')
                        cnt ++;
                    else
                        cnt --;
                 if(cnt == 0)
                     res ++;
             }
           }

         else
          {
             for(int i = 1 ; i < s.size() ; i ++)
             {
                 if(s[i] == 'L')
                      cnt --;
                  else
                      cnt ++;
                   if(cnt == 0)
                      res ++;
        }
    }

            return res;
    }
};