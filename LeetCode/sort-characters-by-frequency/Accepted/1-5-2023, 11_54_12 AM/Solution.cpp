// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> hashmap;
        priority_queue<pair<int,int>> pq;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            hashmap[s[i]] ++;
        }

        for(auto it : hashmap)
        {
            pq.push({it.second , it.first});
        }
        s = "";
        pair<int , char> tmpPair;
        while(!pq.empty())
        {
            tmpPair = pq.top();
            while(tmpPair.first --)
            {
                s += tmpPair.second;
            }
            pq.pop();
        }
        return s ;
    }
};