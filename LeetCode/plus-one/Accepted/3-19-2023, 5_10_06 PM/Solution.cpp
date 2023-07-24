// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
       vector<int> res ;
       bool GotCarry = true;
       for(int i = digits.size()-1 ; i >= 0 ; i --)
       {
           if(GotCarry)
           {
                if(digits[i] == 9)
                {
                    res.push_back(0);
                    GotCarry = true;
                }
                else
                {
                    res.push_back(digits[i]+1);
                    GotCarry = false;
                }
           }
           else
           {
               res.push_back(digits[i]);
           }
       } 
       if(GotCarry)
       {
           res.push_back(1);
       } 
       reverse(res.begin() , res.end());
       return res;
    }
};