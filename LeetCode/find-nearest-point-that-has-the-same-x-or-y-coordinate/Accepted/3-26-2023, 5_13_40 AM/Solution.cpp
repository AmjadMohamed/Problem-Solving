// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int res = -1 , dist = INT_MAX ;
        for(int i = 0 ; i < points.size() ; i ++)
        {
            if(points[i][0] == x || points[i][1] == y)
            {
                if(abs(points[i][0]-x) + abs(points[i][1]-y) < dist)
                {
                    res = i;
                    dist = abs(points[i][0]-x) + abs(points[i][1]-y);
                }
            }
        }
        return res ;
    }
};