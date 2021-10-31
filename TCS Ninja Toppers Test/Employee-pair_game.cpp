// A company is organizing a fun game for its employees. N number of employees are participating in this game.
// Each employee can either compete in the game as an individual or as a pair with another employee.
// The task is to find the number of different ways in which N number of employees can be single or can be paired up.

// Condition:
// If the total count of employees is odd, then pairing is not allowed.
// If the total count of employees is even, then employees can be single or can be paired up

// Instructions:
// Each employee can be paired only once.
// Each employee can only compete once

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n;
    cin>>n;
    
    if(n%2 != 0)
    cout<<"1";


    else
    {
        int dp[n+1];
        for(int i = 0; i <= n; i++)
        {
            if(i <= 2)
                dp[i] = i;
            // f(n) = ways n people can remain single or pair up
            // For n-th person there are two choices:
                // 1) n-th person remains single, we recur 
                // for f(n - 1)
                // 2) n-th person pairs up with any of the 
                // remaining n - 1 persons. We get (n - 1) * f(n - 2)
            else
                dp[i] = dp[i-1] + (i-1)*dp[i-2];
        }

        cout<< dp[n];
    }
    return 0;
}

// Time complexity: O(n)
// Auxiliary Space: O(n)