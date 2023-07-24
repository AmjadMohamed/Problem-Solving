// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<bool> frq(2005,false); // initialilzes the frqArr with a size
        // equals the largest number in the arr 
        for(int i = 0 ; i < arr.size() ; i ++)
        {
            frq[arr[i]] = true;
        }
        int cnt = 0;
        for(int i = 1 ; i <= 2005 ; i ++)
        {
            if(!frq[i])
            {
                cnt ++;
                if(cnt == k)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};