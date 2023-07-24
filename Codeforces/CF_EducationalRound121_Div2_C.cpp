// Author: Amjad Mohamed

#include<bits/stdc++.h>
int main()
{
    int n ;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        int h[a];
        int m[a];
        long long sum = 0;
        for(int i = 0 ; i < a ; i ++)
            cin >> h[i];
        for(int i  = 0 ; i < a ; i ++)
            cin >> m[i];
        vector<pair<int,int>> v ;
        for(int i = 0 ; i < a ; i ++)
        {
            int r = h[i];
            int l = h[i] - m[i] + 1;
            v.push_back({l,r});
        }
        sort(v.begin(), v.end());
        int templ = 1, tempr = 0 ;
        for(auto it : v)
        {
            if(it.first > tempr)
            {
                long long tempSum = tempr-templ+1;
                sum += (tempSum * (tempSum+1))/2;
                templ = it.first ;
                tempr = it.second ;
            }
            else
                tempr = max(tempr, it.second);
        }

        long long tempSum = tempr-templ+1;
        sum += (tempSum * (tempSum+1))/2;

        cout << sum << endl;
    }
}
