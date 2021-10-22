// Given a sentence cstr, written in a camel case (i.e. every word starts with an uppercase letter and there is no space 
// or punctuation between two consecutive words).
// The task is to put one space after every word and convert every uppercase letter to lowercase.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main(){
    eff;
    string s;
    getline(cin,s);
    string str;
    for(int i = 0; i < s.length(); i++)
    {
        if(i == 0)
        {
            str += tolower(s[i]);
            continue;
        }

        if(i != 0 && isupper(s[i]))
        {
            str += " ";
            str += tolower(s[i]);
            continue;
        }

        str+=s[i];
    }

    cout<<str;
    return 0;
}
