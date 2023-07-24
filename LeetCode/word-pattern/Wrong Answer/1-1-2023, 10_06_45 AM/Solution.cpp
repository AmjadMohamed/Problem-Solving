// https://leetcode.com/problems/word-pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp;
        vector<string> ss;
        string tmp = "";
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(s[i] == ' ')
            {
                ss.push_back(tmp);
                tmp = "";
            }
            else
            {
                tmp += s[i];
            }
        }
        ss.push_back(tmp);
        // a3ml map ll characters and strings
        // a4of lw el character m4 fel map a3ml add ll character
        // a3ml check 3ala el pattern enny a3ml traverse 3ala el char string b3den olw l2et el char b sting 8er elly fel map yb2a m4 same pattern
        cout << ss.size() << endl;
        for(int i = 0 ; i < ss.size() ; i ++)
        {
            mp[pattern[i]] = ss[i];
            //cout << pattern[i] << " " << mp[pattern[i]] << endl;
        }
        bool can = true;
        
        for(int i = 0 ; i < ss.size() ; i ++)
        {
            //cout << mp[pattern[i]] << "  " << ss[i] << endl;
            if(mp[pattern[i]] != ss[i])
            {
                can = false;
                break;
            }
        }

        if(can)
            return true;
        else
            return false;
    }
};