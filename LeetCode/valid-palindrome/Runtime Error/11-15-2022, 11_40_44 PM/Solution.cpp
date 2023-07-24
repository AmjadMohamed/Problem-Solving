// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
            //string s = ".,";
    int l = 0, r = s.size()-1;
    while(l < r)
    {
        while(!isalnum(s[l]))
        {
            if(l >= s.size())
                break;
            l++;
        }
        while(!isalnum(s[r]))
        {
            if(r < 0)
                break;
            r-- ;
        }

        if(l > r || r < 0 || l >= s.size())
            break;

        s[l] = tolower(s[l]);
        s[r] = tolower(s[r]);
        //cout << s[l] << " " << s[r] << endl;
        if(tolower(s[l]) != tolower(s[r]))
        {
            //cout << "false\n";
            return false;
        }
        l++, r -- ;
    }
    return true;}
};