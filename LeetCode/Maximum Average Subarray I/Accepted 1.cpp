class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0 ;
        double maxAvg = INT_MIN;
        for(int i = 0 ; i < k ; i ++)
        {
            avg += nums[i];
        }
        avg /= k;
        maxAvg = max(maxAvg , avg);
        int l = 0 , r = k;
        while(r < nums.size())
        {
            avg *= k;
            avg -= nums[l++];
            avg += nums[r++];
            avg /= k;
            maxAvg = max(maxAvg , avg);
        }
        return maxAvg;
    }
};