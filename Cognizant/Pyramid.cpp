#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j = n-1; j >= i; j--)
          cout<<" ";
        for(int j = 1; j <= i; j++)
          cout<<"* ";

        cout<<endl;
    }
    return 0;
}