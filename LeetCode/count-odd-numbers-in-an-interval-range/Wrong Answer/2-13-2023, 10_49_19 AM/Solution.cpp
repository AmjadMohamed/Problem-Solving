// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range

class Solution {
public:
    int countOdds(int low, int high) {
        if(low % 2 == 0)
            low ++;
        if(low >= high)
            return 0;
        else
            return ((high-low)/2+1);
    }
};