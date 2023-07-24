// https://leetcode.com/problems/sort-the-people

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string>hash;
        
        vector<string>ans;
        
        // map the height of the individuals to their names
        
        for(int i=0;i<names.size();i++)
            hash[heights[i]]=names[i];
        
        //sort the heights
        sort(heights.begin(),heights.end(),greater<int>());
        
        //push the names into a vector according to the sorted heights 
        
        for(int i=0;i<names.size();i++)
            ans.push_back(hash[heights[i]]);
        
        return ans;
        
    }
};