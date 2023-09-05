class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashGroup;
        string tempStr = "";
        vector<vector<string>> res;

        for(int i = 0 ; i < strs.size() ; i ++)
        {
            tempStr = strs[i];
            sort(tempStr.begin() , tempStr.end());
            hashGroup[tempStr].push_back(strs[i]);
        }

        for(auto &it : hashGroup)
        {
            res.push_back(it.second);
        }
        return res;
    }
};