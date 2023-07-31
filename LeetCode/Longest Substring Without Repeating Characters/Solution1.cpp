class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hashMap;
        int start = 0;
        int res = 0;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(hashMap.count(s[i]) && hashMap[s[i]] >= start)
            {
                start = hashMap[s[i]] + 1;
            }
            hashMap[s[i]] = i;
            res = max(res , i - start + 1);
        }
        return res;
        
    }
};