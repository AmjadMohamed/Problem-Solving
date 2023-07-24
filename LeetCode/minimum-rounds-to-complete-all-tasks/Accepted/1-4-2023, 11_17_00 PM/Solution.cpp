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


        for(auto &it : mp)
        {
            if(it.second == 1)
            {
                Can = false;
                break;
            }
            if(it.second%3 == 0)
            {
                cnt += it.second/3;
                it.second= 0;
            }
            else
            {
                cnt += (it.second/3)+1;
                it.second = 0;
            }
           
            if(it.second > 0)
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