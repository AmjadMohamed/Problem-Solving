// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(int n) {
        int arr[31] = {0};
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        for(int i = 3 ; i <= n ; i ++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};