// There is a range given n and m in which we have to find the count of all the prime pairs whose difference is 6.
// We have to find how many sets are there within a given range.

// The output consists of a single line, print the count prime pairs in a given range. Else print"No Prime Pairs".

// Constraints:

// 2<=n<=1000
// n<=m<=2000

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n, m;
    cin>>n>>m;

    bool prime[m+1];
    int count = 0;
    memset(prime, true, sizeof(prime));

    for(int i = 2; i*i <= m; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*2; j <= m; j += i)
             prime[j] = false;
        }
    }

    for(int i = n; i <= m-6; i++)
    {
        if(prime[i] && prime[i+6])
        count++;
    }

    if(count > 0)
    cout<<count;
    else
    cout<<"No Prime Pairs";
    
    return 0;
}