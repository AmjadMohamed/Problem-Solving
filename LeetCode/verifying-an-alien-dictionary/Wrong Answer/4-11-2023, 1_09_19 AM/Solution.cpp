// https://leetcode.com/problems/verifying-an-alien-dictionary

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> hashMap;
        for(int i = 0 ; i < order.size(); i ++)
        {
            hashMap[order[i]] = i;
        }
        string str1 , str2;
        for(int i = 0 ; i < words.size()-1 ; i ++)
        {
            if(words[i] > words[i+1])
            {
                return false;
            }      
        }
        return true;
    }
};