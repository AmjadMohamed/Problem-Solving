// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i = 0 ; i < nums1.size() ; i ++)
        {
            mp1[nums1[i]]++;
        }

        for(int i = 0 ; i < nums2.size() ; i ++)
        {
            mp2[nums2[i]] ++;
        }

        if(mp1.size() <= mp2.size())
        {
            for(auto &it : mp1)
            {
                if(mp2.find(it.first) != mp2.end())
                {
                    while(it.second--)
                    {
                        res.push_back(it.first);
                    }
                }
            }
        }

        else
        {
            for(auto &it : mp2)
            {
                if(mp1.find(it.first) != mp1.end())
                {
                    while(it.second--)
                    {
                        res.push_back(it.first);
                    }
                }
            }
        }
       
        return res;
    }
};