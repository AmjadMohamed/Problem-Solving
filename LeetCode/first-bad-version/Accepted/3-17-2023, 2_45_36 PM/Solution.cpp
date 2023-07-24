// https://leetcode.com/problems/first-bad-version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1 , r = n;
        int mid = l + (r-1)/2;
        while(l <= r)
        {
            if(isBadVersion(mid))
            {
                r = mid-1;
            }
            else if(!isBadVersion(mid))
            {
                l = mid+1;
            }
            mid = l + (r-l)/2;
        }
        return mid;
    }
};