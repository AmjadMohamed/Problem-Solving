#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , pairs = 0;
    cin >> n ;
    int arr[n];

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }

    sort(arr , arr + n);

    // Making new array with the length of the biggest integer in the original array ( to count how many times all elements repeated ).
    int x = arr[n - 1];
    x ++ ;
    int arr2[x];


    for(int i = 0 ; i < x ; ++i)
    {
        arr2[i] = 0 ;
    }

    for(int i = 0 ; i < n ; ++i)
    {
        // increasing repeated elements counters in the new array.
        arr2[arr[i]]++ ;
    }

    for(int i = 0 ; i < x ; ++i)
    {
        if(arr2[i] > 0)
        {
           pairs = pairs + arr2[i] / 2 ;
        }
    }

    cout << pairs ;
}

//10 10 10 20 20 20 30 50 => correct answer: 2
//10 10 10 20 20 30 => correct answer: 2
