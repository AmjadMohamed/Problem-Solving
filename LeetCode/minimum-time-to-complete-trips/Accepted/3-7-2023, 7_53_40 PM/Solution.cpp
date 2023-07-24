// https://leetcode.com/problems/minimum-time-to-complete-trips

class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 0 , high = 100000000000000 , mid; // high here should be set to at
        // least 10^14 because the max time to complete trips on the worst case is 
        // 10^7 time for one trip and 10^7 totaltrips to give us total time of 10^14
        long long trips = 0;
        int n = time.size();
        while(low < high)
        {
            mid = (high + low)/2;
            trips = 0 ;
            for(int i = 0 ; i < n ; i ++)
            {
                trips += mid / time[i];
                if(trips >= totalTrips)
                {
                    break;
                }
            }
            if(trips >= totalTrips)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low ;
    }
};
