// https://leetcode.com/problems/maximum-number-of-balloons

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> hashMap;
        hashMap['b'] = 0;
        hashMap['a'] = 0;
        hashMap['l'] = 0;
        hashMap['l'] = 0;
        hashMap['o'] = 0;
        hashMap['o'] = 0;
        hashMap['n'] = 0;

        for(int i = 0 ; i < text.size() ; i ++)
        {
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n')
                hashMap[text[i]] ++;
        }

        int res = INT_MAX;
        hashMap['l'] /= 2;
        hashMap['o'] /= 2;

        for(auto it : hashMap)
        {
            cout << it.first << " " << it.second << endl;
            res = min(res , it.second);
        }

        return res; 
    }
};