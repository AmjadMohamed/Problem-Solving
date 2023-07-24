// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int res = 1 ;
        int temp = n ;
        while(temp != 0)
        {
            res *= temp%10;
            temp /= 10;
        }
        temp = n;
        while(temp != 0)
        {
            res -= temp%10;
            temp /= 10;
        }
        return res;
    }
};