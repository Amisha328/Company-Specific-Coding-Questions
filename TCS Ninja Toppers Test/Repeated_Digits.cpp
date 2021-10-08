// Given two non-negative integers n1 and n2, where n1<n2. 
// The task is to find the total number of integers in the range [n1, n2](both inclusive) which have no repeated digits.


#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n1,n2;
    cin>>n1>>n2;
    set<int> s;
    int c = 0, ans = 0;
    for(int i = n1; i <= n2; i++)
    {
        int n = i;
        while(n > 0)
        {
            s.insert(n%10);
            c++;
            n /= 10;
        }
        if(c == s.size())
        ans++;

        c = 0;
        s.clear();
    }

    cout<<ans;
    return 0;
}