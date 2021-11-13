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

    int f = INT_MIN, s = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > f)
        {
            s = f;
            f = v[i];
        }
        // negative elements
        else if(v[i] < f && v[i] > s)
        s = v[i];
      
      // duplicate elements present
        else if(s == INT_MIN)
        s = -1;
    }
    cout<<s;
    return 0;
}