// https://leetcode.com/problems/robot-return-to-origin

class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0 , d = 0 , r = 0 , l = 0;
        for(char &c : moves)
        {
            switch(c)
            {
                case 'U':
                u ++;
                break;
                case 'D':
                d ++;
                break;
                case 'R':
                r ++;
                break;
                case 'L':
                l ++;
                break;
            }
        }
        return u == d && l == r ? true : false;
    }
};