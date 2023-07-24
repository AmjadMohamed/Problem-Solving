// https://leetcode.com/problems/happy-number

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> hashTable;
        int tmp = 0;
        while(n > 1)
        {
            while(n > 0)
            {
                tmp += pow(n%10 , 2);
                n /= 10;
            }
            hashTable[tmp] ++;
            if(hashTable[tmp] > 1)
            {
                return false;
            }
            n = tmp;
            tmp = 0;
        }
        return true;
    }
};