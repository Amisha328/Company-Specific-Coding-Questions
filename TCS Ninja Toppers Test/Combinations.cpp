// Write a program to print all the combinations of the given word with or without meaning (when unique characters are given).

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void permute(string s, int l, int r)
{
    if(l == r)
    cout<<s<<" ";

    else{
        for(int i = l; i <= r; i++)
        {
            //cout<<"i="<<i<<" l="<<l<<" s="<<s<<endl;
            swap(s[i], s[l]);
            //cout<<"i="<<i<<" l="<<l<<" s="<<s<<endl;
            permute(s, l+1, r);
            //cout<<"i="<<i<<" l="<<l<<" s="<<s<<endl;
            swap(s[i], s[l]);
        }
    }
}
signed main(){
    eff;
    string s;
    getline(cin,s);

    permute(s,0,s.length()-1);

    return 0;
}