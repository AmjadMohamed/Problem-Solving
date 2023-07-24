// https://leetcode.com/problems/rings-and-rods

class Solution {
public:
    string arr[10];
    int countPoints(string rings) 
    {
        for(int i = 1 ; i  < rings.size() ; i ++)
        {
            arr[rings[i]] += rings[i-1];
        }
        int res = 0 ;
        for(int i = 0 ; i < 10 ; i ++)
        {
            if(arr[i].find('R') != string::npos && arr[i].find('B') != string::npos && arr[i].find('G') != string::npos)
                res ++ ;
        }
        return res ;
    }
    
    void main()
    {
        string s ;
        cin >> s ;
        cout << countPoints(res);
    }
};