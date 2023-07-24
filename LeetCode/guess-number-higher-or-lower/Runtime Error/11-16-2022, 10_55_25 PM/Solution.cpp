// https://leetcode.com/problems/guess-number-higher-or-lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 0 , r = n ;
        long long mid;
        while(l <=r)
        {
            mid = (r + (r-l)) / 2;
            if(guess(mid) == 0)
                return mid;
            else if(guess(mid) == 1)
                l = mid + 1;
            else 
                r = mid - 1;
        }
        return mid;
    }
};