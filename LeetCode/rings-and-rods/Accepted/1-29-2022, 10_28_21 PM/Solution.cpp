// https://leetcode.com/problems/rings-and-rods

class Solution {
public:
    string arr[10];
    int countPoints(string rings) 
    {
        int i;
        for(i = 1 ; i  < rings.size() ; i += 2)
        {
          arr[rings[i]- '0'] += rings[i-1];
        }
        int res = 0 ;
        for(i = 0 ; i < 10 ; i ++)
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
        cout << countPoints(s);
    }
};