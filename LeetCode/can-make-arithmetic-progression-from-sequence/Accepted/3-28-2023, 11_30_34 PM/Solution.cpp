// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int temp = arr[0] - arr[1];
        for(int i = 1 ; i < arr.size()-1 ; i ++)
        {
            if(temp != arr[i] - arr[i+1])
            {
                return false;
            }
        }   
        return true;
    }
};