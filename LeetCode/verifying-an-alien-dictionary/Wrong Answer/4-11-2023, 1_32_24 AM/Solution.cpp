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
            str1 = words[i];
            str2 = words[i+1];
            for(int i = 0 ; i < min(str1.size() , str2.size()) ; i ++)
            {
                if(hashMap[str1[i]] < hashMap[str2[i]])
                {
                    return true;
                }
                else if(hashMap[str1[i]] > hashMap[str2[i]])
                {
                    return false;
                }
            }
        }

        for(int i = 0 ; i < words.size()-1 ; i ++)
        {
            if(words[i].size() > words[i+1].size())
            {
                return false;
            }
        }
        return true;
    }
};