// https://leetcode.com/problems/minimum-time-to-complete-trips

class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 0 , high = 10000000000 , mid;
        long long trips = 0;
        while(low < high)
        {
            mid = low + (high - low)/2;
            trips = 0 ;
            for(int i = 0 ; i < time.size() ; i ++)
            {
                trips += mid / time[i];
                //cout << trips << endl;
                //cout << low << " " << high << endl;
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