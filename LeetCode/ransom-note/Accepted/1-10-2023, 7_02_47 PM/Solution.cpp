// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char , int> magazineMap;

        for(int i = 0 ; i < magazine.size() ; i ++)
        {
            magazineMap[magazine[i]]++;
        }

        for(int i = 0 ; i < ransomNote.size() ; i ++)
        {
           if(magazineMap.find(ransomNote[i]) == magazineMap.end())
           {
               return false;
           }
           else
           {
               if(magazineMap[ransomNote[i]] == 0)
               {
                   return false;
               }
               else
               {
                  magazineMap[ransomNote[i]]--; 
               }
           }
        }
        return true;        
    }
};