class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr[nums.size()];
        memset(arr , 0 , sizeof(arr));
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(arr[nums[i]] != 0)
            {
                return nums[i];
            }
            arr[nums[i]] ++;
        }
        return 0 ;
    }
};