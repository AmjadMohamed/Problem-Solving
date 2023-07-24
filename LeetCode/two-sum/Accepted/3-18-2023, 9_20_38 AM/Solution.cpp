// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> hashMap;
        int tmp;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            hashMap[nums[i]] = i;
        }

        for(int i = 0 ; i < nums.size() ; i ++)
        {
            tmp = target - nums[i];
            //cout << tmp << " " << hashMap[tmp] << endl;
            if(hashMap.find(tmp) != hashMap.end())
            {
                if(hashMap[tmp] != i)
                {
                    v.push_back(i);
                    v.push_back(hashMap[tmp]);
                    break;
                }
            }
        }
        return v;
    }
};