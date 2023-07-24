#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , NumOfShifts , temp = 0 ;
    cin >> n >> NumOfShifts ;

    int arr[n];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i] ;
    }

    for(int i = 0 ; i < NumOfShifts ;i ++)
    {
        // temp to store first element value
        temp = arr[0];
        // this loop shifts elements 1 time to the left
        for(int j = 0 ; j < n - 1 ; j ++)
        {
            arr[j] = arr[j + 1];
        }
        // switch last element with the temp value ( the element we shifted ).
        arr[n - 1] = temp ;

    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " ";
    }



}

// 5 4 - 1 2 3 4 5 => correct answer: 5 1 2 3 4
