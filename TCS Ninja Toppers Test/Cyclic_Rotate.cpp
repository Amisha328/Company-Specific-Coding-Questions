// Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.
// Note : Keep the first of the array unaltered.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

vi rotate(vi &v, int n, int k)
{
    if(k > n) k = k % n;

    reverse(v.begin()+(n-k),v.end());
    reverse(v.begin(),v.begin()+(n-k));
    reverse(v.begin(),v.end());

    //cout<<"Done\n";
    return v;
}
signed main(){
    eff;
    int n,k;
    cin>>n;
    vi v(n);
    for(int i = 0; i < n; i++)
    cin>>v[i];
    cin>>k;
    
    vi ans(n);
    ans = rotate(v,n,k);

    for(auto it: ans)
    cout<<it<<" ";
    return 0;
}