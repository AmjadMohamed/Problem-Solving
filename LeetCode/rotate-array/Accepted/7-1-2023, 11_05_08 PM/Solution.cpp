// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin() , nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        // dayman htla7ez en el array is the same bs reversed + kol goz2 shifted is also reversed to the 
        // original state.
        // also 3a4an b3ml reverse ll array elements lazem dayman admn en el "k" tkon fe range el array
        // size
    }
};