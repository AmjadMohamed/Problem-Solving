class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colors[3] = {0};
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            colors[nums[i]] ++;
        }

        int indx = 0;
        for(int i = 0 ; i < 3 ; i ++)
        {
            while(colors[i] > 0)
            {
                nums[indx++] = i;
                colors[i]--;
            }
        }
    }
};