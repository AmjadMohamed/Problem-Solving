// https://leetcode.com/problems/smallest-even-multiple

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return __gcd(n,2);
    }
};