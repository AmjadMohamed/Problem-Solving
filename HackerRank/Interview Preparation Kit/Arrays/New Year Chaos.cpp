#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , arrSize , bribeCounter = 0;
    bool IsChaotic = false ;
    cin >> n ;

    while( n > 0)
    {
        bribeCounter = 0 ;
        IsChaotic = false ;
        cin >> arrSize;
        int arr[arrSize];

        //filling the array
        for(int i = 1 ; i <= arrSize ; i ++ )
        {
            cin >> arr[i];
        }

        //starting the sort from the last element of the array
        for(int i = arrSize ; i > 0 ; i --)
        {
            // because every element should be in the same position as it's value, we check if the value equals the position, it's in the correct place
            if(i == arr[i])
            {
                continue ;
            }
            // making sure that we are not going to check an element out of array bounds and check if the element with the same value of the index is behind by 1
            else if(i - 1 > 0 && i == arr[i - 1])
            {
                bribeCounter ++ ;
                swap(arr[i] , arr[i - 1]);
            }
            // making sure that we are not going to check an element out of array bounds and check if the element with the same value of the index is behind by 2
            else if(i - 2 > 0 && i == arr[i - 2])
            {
                bribeCounter +=2 ;
                // getting the element back to it's correct place in the queue and moving the other 2 elements to the front of it
                swap(arr[i - 1] , arr[i - 2]);
                swap(arr[i] , arr[i - 1]);
            }
            else
            {
                cout<<"Too chaotic"<< endl;
                IsChaotic = true ;
                break ;
            }

        }

        // if the array is sorted print out number of bribes
        if(!IsChaotic)
        {
            cout << bribeCounter << endl;
        }
        n -- ;
    }
}

/*  2
    5
2 1 5 3 4  => correct answer: 3
    5
2 5 1 3 4  => correct answer: "Too chaotic"
*/

