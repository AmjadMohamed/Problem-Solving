// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
       string tmp = "";
      for(int i = 0 ; i < s.size() ; i ++)
      {
          if(isalnum(s[i]))
           {
               tmp +=  tolower(s[i]);
           }
      }
     if(tmp.size() == 0)
            return true;
     for(int i = 0  ; i <= tmp.size()/2 ; i ++)
     {
           if(tmp[i] != tmp[tmp.size()-i-1])
           {
              return false;
            }
     }
        return true;
        }
};