// https://leetcode.com/problems/robot-return-to-origin

class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt = 0;
        for(char &c : moves)
        {
            switch(c)
            {
                case 'U':
                cnt ++;
                break;
                case 'D':
                cnt --;
                break;
                case 'R':
                cnt ++;
                break;
                case 'L':
                cnt --;
                break;
            }
        }
        return cnt == 0 ? true : false;
    }
};