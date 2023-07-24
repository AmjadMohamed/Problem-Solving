// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < tasks.size() ; i ++)
        {
            mp[tasks[i]] ++;
        }
        int cnt = 0 ;
        bool Can = true;
        for(int i = 0 ; i < mp.size() ; i ++)
        {
            while(mp[i] >= 3)
            {
                mp[i] -= 3;
                cnt ++;
            }
            while(mp[i] >= 2)
            {
                mp[i] -= 2;
                cnt ++;
            }
            if(mp[i] > 0)
            {
                Can = false;
                break;
            }
        }
        if(!Can)
        {
            return -1;
        }
        else
        {
            return cnt ;
        }
    }
};