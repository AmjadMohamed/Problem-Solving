// https://leetcode.com/problems/sum-of-all-odd-length-subarrays

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int cnt = 1;
        int tmpSum = 0;
        for(int i = 0 ; i < arr.size() ; i ++)
        {
            sum += arr[i];
            tmpSum = arr[i] ;
            cnt = 1 ;
            for(int j = i+1 ; j < arr.size() ; j ++)
            {
                tmpSum += arr[j];
                cnt ++;
                if(cnt&1)
                {
                    sum += tmpSum;
                }
            }
        }
        return sum ;
    }
};