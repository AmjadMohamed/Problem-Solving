class Solution {
public:
    vector<int> PrefixProducts;
    vector<int> SuffixProducts;
    void ProductVectorElements(vector<int>& v)
    {
        PrefixProducts.push_back(1);
        for(int i = 0 ; i < v.size() ; i ++)
        {
            PrefixProducts.push_back(PrefixProducts[i] * v[i]);
        }

        SuffixProducts.push_back(1);
        for(int i = 0 ; i < v.size() ; i ++)
        {
            SuffixProducts.push_back(SuffixProducts[i] * v[v.size()-i-1]);
        }
        reverse(SuffixProducts.begin() , SuffixProducts.end());
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        ProductVectorElements(nums);
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            nums[i] = PrefixProducts[i] * SuffixProducts[i+1];
        }
        return nums;
    }
};