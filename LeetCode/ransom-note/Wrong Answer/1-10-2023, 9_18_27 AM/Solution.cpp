// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin() , ransomNote.end());
        sort(magazine.begin() , magazine.end());
        
        for(int i = 0 ; i < ransomNote.size() ; i ++)
        {
            if(ransomNote[i] != magazine[i])
            {
                return false;
            }
        }

        return true;
    }
};