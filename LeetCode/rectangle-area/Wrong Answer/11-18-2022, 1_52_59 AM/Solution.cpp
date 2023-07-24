// https://leetcode.com/problems/rectangle-area

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
            long long firstRectArea = (ax2-ax1) * (ay2-ay1);
    long long secondRectArea = (bx2-bx1) * (by2-by1);

    //cout << firstRectArea << " " << secondRectArea << endl;

    long long tmpx1 , tmpx2 , tmpy1, tmpy2;
    tmpx1 = max(ax1 , bx1);
    tmpx2 = min(ax2 , bx2);
    tmpy1 = max(ay1 , by1);
    tmpy2 = min(ay2 , by2);

    long long IntersectRectArea = (tmpx2 - tmpx1) * (tmpy2 - tmpy1);
    
    return (firstRectArea + secondRectArea - IntersectRectArea);
    }
};