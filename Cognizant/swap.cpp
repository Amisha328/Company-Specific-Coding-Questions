#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int a, b;
    cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<a<<" "<<b;

    return 0;
}