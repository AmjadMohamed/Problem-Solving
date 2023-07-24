// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt = 0 ;
        int res = 0 ;
        for(int i = 0 ; i < k ; i ++)
        {
            if(s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'u')
            {
                cnt ++;
            }
        }
        res = max(res , cnt);
        int l = 0 , r = k-1;
        while(r < s.size())
        {
            if(s[l] == 'i' || s[l] == 'e' || s[l] == 'o' || s[l] == 'a' || s[l] == 'u')
            {
                cnt --;
            }
            l ++ , r ++;
            if(s[r] == 'i' || s[r] == 'e' || s[r] == 'o' || s[r] == 'a' || s[r] == 'u')
            {
                cnt ++;
            }
            
            res = max(cnt , res);
        }
        return res;
    }
};