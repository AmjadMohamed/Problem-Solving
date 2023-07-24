// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
         int left = *max_element(weights.begin(), weights.end());
         int right = accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = (left + right) / 2;
            int current_load = 0;
            int current_days = 1;

            for (int weight : weights) {
                if (current_load + weight > mid) {
                    current_load = weight;
                    current_days++;
                } else {
                    current_load += weight;
                }
            }

            if (current_days > days) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};