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
            l++;
        }
        while(!isalnum(s[r]))
        {
            r-- ;
        }

        if(l > r)
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