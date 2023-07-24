// https://leetcode.com/problems/arranging-coins

class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0 , r = n;
        long mid = 0, curr = 0;
        while(l <= r)
        {
            mid = l + (r-l)/2;
            curr = (mid * (mid+1))/2;
            if(curr > n)
            {
                r = mid-1;
            }
            else if(curr < n)
            {
                l = mid+1;
            }
            else
            {
                return mid;
            }
        }
        return r;
    }
};