// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int maxNumOfCandies = *max_element(candies.begin() , candies.end());
        for(int i = 0 ; i < candies.size() ; i ++)
        {
            if(candies[i] + extraCandies >= maxNumOfCandies)
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        return res;
    }
};