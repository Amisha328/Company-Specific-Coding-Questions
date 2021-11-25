#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i = 0; i < n/2; i++)
    {
        swap(s[i],s[n-i-1]);
    }
    cout<<s;
    return 0;
}

// Time Complexity: O(n)