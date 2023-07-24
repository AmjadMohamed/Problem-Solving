// https://leetcode.com/problems/degree-of-an-array

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> Hash;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            Hash[nums[i]].push_back(i);
        }

        int res = INT_MAX;
        int mx = 0;
        for(auto &it : Hash)
        {
            if(it.second.size() > mx)
            {
                mx = it.second.size();
                res = abs(it.second[0] - it.second[it.second.size()-1]);
            }
            else if(it.second.size() == mx)
            {
                res = min(res,abs(it.second[0] - it.second[it.second.size()-1]));
            }
        }
        return (res+1) ;
    }
};