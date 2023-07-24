// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range

class Solution {
public:
    int countOdds(int low, int high) {
        if(low % 2 == 0)
            return ceil(((double)high-low)/2);
        else
            return (high-low)/2+1;
    }
};