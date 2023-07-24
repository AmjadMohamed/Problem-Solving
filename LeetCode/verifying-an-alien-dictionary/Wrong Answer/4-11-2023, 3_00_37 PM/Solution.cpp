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
        bool can = true;
        for(int i = 0 ; i < words.size() ; i ++)
        {
            for(int j = i+1 ; j < words.size() ; j ++)
            {
                str1 = words[i];
                str2 = words[j];
                for(int z = 0 ; z < max(str1.size() , str2.size()) ; z ++)
                {
                    cout << str1[z] << " " << str2[z] << endl;
                    if(hashMap[str1[z]] < hashMap[str2[z]])
                    {
                        break;
                    }
                    else if(hashMap[str1[z]] > hashMap[str2[z]])
                    {
                        can = false;
                        break;
                    }
                }
            }
        }
        if(can)
            return true;
        else
            return false;
    }
};