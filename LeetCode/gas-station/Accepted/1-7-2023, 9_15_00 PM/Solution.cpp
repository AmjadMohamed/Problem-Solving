// https://leetcode.com/problems/gas-station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0 , total = 0 , position = 0;
        for(int i = 0 ; i < gas.size() ; i ++)
        {
            sum += gas[i]-cost[i];
            if(sum < 0)
            {
                total += sum;
                sum = 0;
                position = i+1;
            }
        }
        total += sum;
        
        if(total < 0)
            return -1;
        else
            return position;
    }
};