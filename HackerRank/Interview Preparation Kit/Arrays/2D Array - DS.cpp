#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[6][6] , Result = INT_MIN , Sum = 0;

    for(int row = 0 ; row < 6 ; ++row)
    {
        for(int column = 0 ; column < 6 ; ++column)
        {
            cin >> arr[row][column];
        }
    }

    for(int row = 0 ; row < 4 ; ++row)
    {
        for(int column = 0 ; column < 4 ; ++column)
        {
            // calculate the hour glass
            Sum = arr[row][column] + arr[row][column + 1] + arr[row][column + 2] + arr[row + 1][ column + 1] + arr[row + 2][column] + arr[row + 2][column + 1 ] + arr[row + 2][column + 2];

            Result = max(Result , Sum);
        }
    }

    cout << Result ;
}

/*  1 1 1 0 0 0
    0 1 0 0 0 0
    1 1 1 0 0 0 => correct answer: 19
    0 0 2 4 4 0
    0 0 0 2 0 0
    0 0 1 2 4 0
*/

