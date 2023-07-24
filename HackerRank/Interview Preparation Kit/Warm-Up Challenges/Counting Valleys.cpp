#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , cnt = 0 , valley = 0;
    cin >> n ;
    char arr[n];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i ++)
    {
        if(arr[i] == 'U')
        {
            // when he reaches sea level again after coming out of a valley we increase it ( cnt == -1 means that he is coming out of a valley ).
            if(cnt == -1)
                valley ++ ;
            cnt ++ ;
        }
        else
        {
            cnt -- ;
        }

    }

    cout << valley ;
}

// UDDDUDUU => correct answer: 1
