// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // h4ml map ll chars
        // hloop 3ala el ransomnNote o a4of lw el char bta3y mwgod fe el map el tanya ha5od mnha
        // 1 an2sha
        // keep looping till we reach 0 fe el string el tany (el map el tanya) h return false
        // else return true

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