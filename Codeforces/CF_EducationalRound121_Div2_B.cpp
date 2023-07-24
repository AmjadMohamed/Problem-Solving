// Author: Amjad Mohamed

#include<bits/stdc++.h>
int main()
{
    int n;
    cin >> n ;
    while(n--)
    {
        string s ;
        cin >> s ;
        string ss, temp;
        int x;
        bool IsBiggest = false;
        for(int i = s.size()-1 ; i >= 0 ; i --)
        {
            if((s[i] - '0') + (s[i-1] - '0') >= 10 && !IsBiggest && i > 0)
            {
                x = (s[i] - '0') + (s[i-1] - '0');
                temp = to_string(x);
                reverse(temp.begin(), temp.end());
                ss += temp;
                IsBiggest = true;
                i--;
            }
            else
            {
                if(!IsBiggest && i == 1)
                {
                    x = (s[i] - '0') + (s[i-1] - '0');
                    temp = to_string(x);
                    reverse(temp.begin(), temp.end());
                    ss += temp;
                    IsBiggest = true;
                    i--;
                }
                else
                    ss += s[i];
            }
        }
        reverse(ss.begin(), ss.end());
        if(s.size() == 2)
            cout << (s[s.size()-1] - '0') + (s[s.size()-2] - '0') << endl;
        else
            cout << ss << endl;
    }
}
