// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int x;
        for(int i = 0 ; i < nums1.size() ; i ++)
        {
            mp1[nums1[i]]++;
        }

        for(int i = 0 ; i < nums2.size() ; i ++)
        {
            mp2[nums2[i]] ++;
        }

        int tmp;
        for(auto &it : mp1)
        {
            if(mp2.find(it) != mp2.end())
            {
                tmp = min(mp1[it.second] , mp2[it.second]);
                while(tmp--)
                {
                    res.push_back(it.first);
                }
            }
        }
       
        return res;
    }
};