// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int LargestToRight = -1;
        for(int i = arr.size()-1 ; i >=0 ; i --)
        {
            if(arr[i] > LargestToRight)
            {
                swap(arr[i] , LargestToRight);
            }
            else 
            {
                arr[i] = LargestToRight;
            }
        }
        return arr;
    }
};