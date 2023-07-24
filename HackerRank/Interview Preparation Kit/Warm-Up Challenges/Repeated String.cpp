#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "" ;
    long long n = 0, aCounterInDefaultString = 0;
    cin >> s >> n ;
    for(int i = 0 ; i < s.length() ; i ++)
    {
        if(s[i] == 'a')
        {
            aCounterInDefaultString ++ ;
        }
    }

    // this will get number of a's in the repeated string ( integer div : يعني هيتبقى حتة من السترينج محسبتهاش)
    long long aRepeatedTimes = (n / s.length()) * aCounterInDefaultString ;
    // this will get the reminder of the string ( and see if there is any a's in their :  يعني هحسب الحتة الزيادة اللي محسبتهاش من السترينج)
    long long RemainingStringLength = n% s.length();

    for(int i = 0 ; i < RemainingStringLength ; i ++)
    {
        if(s[i] == 'a')
        {
            aRepeatedTimes ++ ;
        }
    }

    cout << aRepeatedTimes ;

}

// aba 10 => correct answer: 7
// a 1000000000000 => correct answer: 1000000000000
// abcac 10 => correct answer: 4
