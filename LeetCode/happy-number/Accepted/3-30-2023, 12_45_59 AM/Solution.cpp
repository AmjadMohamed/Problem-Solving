// https://leetcode.com/problems/happy-number

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> hashTable;
        int tmp = 0 , res = 0;
        while(n > 1)
        {
            tmp = n;
            while(tmp > 0)
            {
                res += pow(tmp%10 , 2);
                tmp /= 10;
            }
            hashTable[res] ++;
            if(hashTable[res] > 1)
            {
                return false;
            }
            n = res;
            res = 0;
        }
        return true;
    }
};