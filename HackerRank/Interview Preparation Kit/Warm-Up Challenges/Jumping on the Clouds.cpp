#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , cnt = 0 , steps = 0 , start = 0;
    cin >> n ;
    int arr[n] , arrTemp[n];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
        arrTemp[i] = -1 ;
    }

    for(int i = 0 ; i < n ; i ++)
    {
        if(arr[i] == 0)
        {
            arrTemp[i] = i ;
        }
    }


    for(int i = 0 ; i < n ; i ++)
    {
        //this checks all elements except last one ( if the 2nd element == -1 we don't count it because we start the starting point at 0 and first element is 0 so it will count it as a move.
        if(arrTemp[i] == -1 && i !=1)
        {
            cnt = arrTemp[i - 1] - start ;
            if(cnt <= 2)
            {
                steps ++ ;
            }
            else
            {
                steps += ceil(double(cnt)/2);
            }
            start = arrTemp[i - 1] ;
        }
        //this checks last element
        else if( i == n - 1)
        {
            if(arrTemp[i] == -1)
            {
                continue ;
            }
            else
            {
                cnt = arrTemp[i] - start ;
                if(cnt <=2)
                {
                    steps ++;
                }
                else
                {
                    steps+= ceil(double(cnt)/2);
                }
            }
        }

    }

    cout << steps ;

}

// 0 0 1 0 0 1 0 => correct answer: 4
// 0 0 0 0 1 0 => correct answer: 3
// 0 1 0 0 0 1 0 => correct answer: 3
