#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , MinimumSwaps = 0;
    cin >> n ;
    int arr[n];
    bool visitedArr[n];
    // we will make an array of boolean to check whether the element is visited or not to avoid checking it more than once.
    for(int i = 1 ; i <= n ; i ++)
    {
        cin >> arr[i] ;
        visitedArr[i] = false ;
    }

    for(int i = 1 ; i <=n ; i ++)
    {
        int a = i , b = arr[i] , len = 1 ;
        // if the element is not visited before we check if it is in the right position.
        if(!visitedArr[i])
        {
            visitedArr[i] = true ;
            // if it is not in the right position we start to check if the position with the same value as the current element contains the element that should be
            // in the current position => 3 2 1 => 3 is the element in the position number 1 so we check position number 3, we will find that in position number 3
            // the element equals the current position which is 1 so it will require length - 1 ( 2 - 1 in our case ) swaps to sort the array with the minimum swaps.
            while(b != i)
            {
                visitedArr[b] = true ;
                a = b ;
                b = arr[b];
                len ++ ;
            }
        }
        // after every cycle ends we calculate the minimum swaps for it and add it to the MinimumSwaps variable.
        MinimumSwaps += (len - 1);
    }

    cout << MinimumSwaps ;


}

// 4 -> 4 3 1 2 => correct answer: 3
// 5 -> 2 3 4 1 5 => correct answer: 3
