// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int mult = 1 ;
        int sum = 0 ;
        int temp = n ;
        while(temp != 0)
        {
            sum += temp%10;
            temp /= 10;
        }
        temp = n;
        while(temp != 0)
        {
            mult *= temp%10;
            temp /= 10;
        }
        return mult - sum ;
        
    }
};