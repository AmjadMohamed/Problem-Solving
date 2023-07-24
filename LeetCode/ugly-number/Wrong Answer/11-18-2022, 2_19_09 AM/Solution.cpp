// https://leetcode.com/problems/ugly-number

class Solution {
public:
    bool isUgly(int n) {
        for(int i = 2 ; i <= n/2 ; i ++)
        {
            if(n % i == 0 && i != 2 && i != 3 && i != 5)
                return false;
        }
        return true;
    }
};