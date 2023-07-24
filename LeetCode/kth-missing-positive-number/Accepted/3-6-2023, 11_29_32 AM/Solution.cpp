// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return k + left;
    }
};