// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int s = arr.size();
        int maxi = arr[s-2];
        arr[s-1] = -1;
        for(int i =s-2; i>=0; i--)
        {
            arr[i] = maxi;
            maxi = max(arr[i] , maxi);
        }
        return arr;
    }
};