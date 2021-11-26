#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

int remove(vi &v, int n)
{
    int res = 1;
    for(int i = 1; i < n; i++)
    {
        if(v[res-1] != v[i])
        {
            v[res] = v[i];
            res++;
        }
        
    }
    return res;
}
signed main(){
    eff;
    int n;
    cin>>n;
    vi v(n);
    for(int i = 0; i < n; i++)
    cin>>v[i];

    int l = remove(v, n);
    for(int i = 0; i < l; i++)
    cout<<v[i]<<" ";
    
    return 0;
}

// Time Complexity: O(n)