// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 1 ; i < flowerbed.size()-1 ; i ++)
        {
            if(flowerbed[i] == 0)
            {
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
                {
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        if(n <= 0)
        {
            return true;
        }
        return false;
    }
};