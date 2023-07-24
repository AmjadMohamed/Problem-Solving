// https://leetcode.com/problems/rings-and-rods

class Solution {
public:
    string arr[10];
    int countPoints(string rings) 
    {
        int rods[10] = { 0 }, cnt = 0;
        for (int i = 0; i < rings.size(); i += 2)
            rods[rings[i + 1] - '0'] |=
            (rings[i] == 'R') |
            ((rings[i] == 'G') << 1) |
            ((rings[i] == 'B') << 2);
        for (int i = 0; i < 10; i++)
            if (rods[i] == 7) cnt++;
        return cnt;
    }
    
    void main()
    {
        string s ;
        cin >> s ;
        cout << countPoints(s);
    }
};