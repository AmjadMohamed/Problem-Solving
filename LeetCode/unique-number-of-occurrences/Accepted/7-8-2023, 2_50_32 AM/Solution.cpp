// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freqArray[2000] = {0};
        sort(arr.begin() , arr.end());
        int cnt = 0 ;
        for(int i = 0 ; i < arr.size()-1 ; i ++)
        {
            if(arr[i] != arr[i+1])
            {
                freqArray[cnt+1]++;
                cnt = 0;
            }
            else
            {
                cnt ++;
            }
        }

        // checking last element
        if(arr.size() == 1 || arr[arr.size()-1] != arr[arr.size()-2])
        {
            freqArray[1]++;
        }

        for(int i = 0 ; i < 2000 ; i ++)
        {
            if(freqArray[i] > 1)
            {
                return false;
            }
        }
        return true;
    }
};