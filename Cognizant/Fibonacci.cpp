#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n;
    cin>>n;
    int a = 0, b = 1, c;
    cout<<a<<" "<<b<<" ";
    while(n--)
    {
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return 0;
}