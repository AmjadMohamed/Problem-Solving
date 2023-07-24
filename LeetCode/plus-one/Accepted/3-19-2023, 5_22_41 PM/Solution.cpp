// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size() , carry = 0 , sum = 0;
        digits[sz-1] += 1;

        for(int i = sz-1 ; i >= 0 ; i --)
        {
            sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }

        if(carry != 0)
        {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};