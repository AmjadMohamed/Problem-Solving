// https://leetcode.com/problems/sort-an-array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // using merge sort
        mergeSort(nums , 0 , nums.size()-1);
        return nums;
    }

    void mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) {
            return;
        }
        int mid = start + (end - start) / 2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);
        merge(nums, start, mid, end);
    }

    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp(end - start + 1);
        int i = start, j = mid + 1, k = 0;

        while (i <= mid && j <= end) {
            if (nums[i] < nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }

        while (i <= mid) {
            temp[k++] = nums[i++];
        }

        while (j <= end) {
            temp[k++] = nums[j++];
        }

        for (int i = start; i <= end; i++) {
            nums[i] = temp[i - start];
        }
    }
};