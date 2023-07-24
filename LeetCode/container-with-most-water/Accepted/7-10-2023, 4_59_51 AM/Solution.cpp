// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        int l = 0 , r = height.size()-1;
        while(l < r)
        {
            result = max(result , (r - l) * min(height[l],height[r]));
            if(height[l] <= height[r])
            {
                l ++;
            }
            else
            {
                r --;
            }
        }
        return result;
    }
};