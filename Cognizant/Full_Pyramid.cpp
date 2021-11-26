#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n;
    cin>>n;
    int m = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j = n-1; j >= i; j--)
          cout<<" ";
        for(int j = 1; j <= m; j++)
          cout<<"*";
        m+=2;

        cout<<endl;
    }
    return 0;
}