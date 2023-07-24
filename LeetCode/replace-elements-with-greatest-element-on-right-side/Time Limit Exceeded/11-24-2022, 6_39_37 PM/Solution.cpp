// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int LargestToRight = 0;
        for(int i = 0 ; i < arr.size()-1 ; i ++)
        {
            LargestToRight = *max_element(arr.begin()+i+1 , arr.end());
            arr[i] = LargestToRight;
        }
        if(arr.size() > 0)
            arr[arr.size()-1] = -1;
        return arr;
    }
};