#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n;
    cin>>n;
    int m = n;
    int r = 0, ar = 0;
    while(n > 0)
    {
         r = n % 10;
         ar = ar + (r * r * r);
         n = n / 10;
    }
    if(ar == m)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }
    return 0;
}