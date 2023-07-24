// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int diff = 0;
        vector<pair<char , char>> v;
        for(int i = 0 ; i < s1.size() ; i ++)
        {
            if(s1[i] != s2[i])
            {
                diff ++ ;
                v.push_back({s1[i] , s2[i]});
            }

        }

        if(diff > 2)
        {
            return false;
        }
        else if(diff == 0)
        {
            return true;
        }
        else
        {
            if(v[0].first == v[1].second && v[0].second == v[1].first)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};