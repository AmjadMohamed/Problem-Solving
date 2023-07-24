// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> hashmap;
        multimap<int,char> mp;

        for(int i = 0 ; i < s.size() ; i ++)
        {
            hashmap[s[i]] ++;
        }

        for(auto it : hashmap)
        {
            //mp[it.second] = it.first;
            mp.insert(pair<int, char>(it.second, it.first));
        }
        string tmp = "";
        int cnt = 0 ;
        for(auto it : mp)
        {
            cnt = it.first;
            while(cnt--)
            {
                tmp += it.second;
            }
        }
        reverse(tmp.begin() , tmp.end());
        return tmp ;
    }
};