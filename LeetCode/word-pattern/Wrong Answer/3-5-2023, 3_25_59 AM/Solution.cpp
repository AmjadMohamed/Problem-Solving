// https://leetcode.com/problems/word-pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> hashMap;
        stringstream ss(s);
        vector<string> words;
        string word;
        while (getline(ss, word, ' '))
        {
            words.push_back(word);
        }

        for(int i = 0 ; i < pattern.size(); i ++)
        {
            hashMap[pattern[i]] = words[i];
        }

        for(int i = 0 ; i < pattern.size(); i ++)
        {
            if(hashMap[pattern[i]] != words[i])
            {
                return false;
            }
        }
        return true;
    }
};