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
                cnt += 2;
                break;
                case 'L':
                cnt -= 2;
                break;
            }
        }
        return cnt == 0 ? true : false;
    }
};