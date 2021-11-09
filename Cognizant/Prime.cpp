#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

bool Prime(int n)
{
    if(n == 1)
    return false;
    else if(n == 2 || n == 3)
    return true;
    else if(n % 2 == 0 || n % 3 == 0)
    return false;
    else{
        for(int i = 5; i * i <= n; i = (i+6))
        {
            if(n%i == 0 || n%(i+2) == 0)
            return false;
        }
        return true;
    }
}
signed main(){
    eff;
    int n;
    cin>>n;
    cout<<Prime(n);
    return 0;
}