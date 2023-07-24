// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < tasks.size() ; i ++)
        {
            mp[tasks[i]] ++;
        }
        cout << mp.size() << endl;
        int cnt = 0 ;
        bool Can = true;
        for(int i = 0 ; i < mp.size() ; i ++)
        {
            if(mp[i] == 1)
            {
                Can = false;
                break;
            }
            if(mp[i]%3 == 0)
            {
                cnt += mp[i]/3;
                mp[i] = 0;
            }
            else
            {
                cnt += (mp[i]/3)+1;
                mp[i] = 0;
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