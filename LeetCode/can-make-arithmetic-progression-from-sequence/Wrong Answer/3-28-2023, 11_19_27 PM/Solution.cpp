// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int temp = abs(arr[0]) - abs(arr[1]);
        for(int i = 1 ; i < arr.size()-1 ; i ++)
        {
            if(temp != abs(arr[i]) - abs(arr[i+1]))
            {
                return false;
            }
        }   
        return true;
    }
};