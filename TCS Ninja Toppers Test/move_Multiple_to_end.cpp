// Given an array Arr[ ] of N integer numbers. The task is to rewrite the array by putting all multipliers at the end of the given array.
// Note : The order of the numbers which are not the multiplier of 10 should remain unaltered ,
// and similarly the order of the numbers which are the multiplier of 10 should remain unaltered.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
signed main(){
    eff;
    int n;
    cin>>n;
    vi v(n);
    for(int i = 0; i < n; i++)
    cin>>v[i];

    int res = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i]%10 != 0)
        {
            swap(v[i],v[res]);
            res++;
        }
    }

    for(int i = 0; i < n; i++)
    cout<<v[i]<<" ";
    return 0;
}