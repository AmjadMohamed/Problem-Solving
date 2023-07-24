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
        bool can = true, isSame = true;
        for(int i = 0 ; i < words.size()-1 ; i ++)
        {
            str1 = words[i];
            str2 = words[i+1];
            isSame = true;
            for(int z = 0 ; z < min(str1.size() , str2.size()) ; z ++)
            {
                //cout << str1[z] << " " << str2[z] << endl;
                if(hashMap[str1[z]] < hashMap[str2[z]])
                {
                    isSame = false;
                    break;
                }
                else if(hashMap[str1[z]] > hashMap[str2[z]])
                {
                    can = false;
                    isSame = false;
                    break;
                }
            }
            if(isSame)
            {
                if(str1.size() > str2.size())
                {
                    can = false;
                }
            }
        }
        if(can)
            return true;
        else
            return false;
    }
};