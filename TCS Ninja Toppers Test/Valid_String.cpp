// Problem Statement – 
// Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable.
//  The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. 
// The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.

// Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

// (* > #): positive integer
// (# > *): negative integer
// (# = *): 0

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

int checkVaild(string s)
{
    int n = s.length();
    int count_star = 0;
    int count_hash = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            count_star++;
        }
        else
        {
            count_hash++;
        }
    }
    return count_star-count_hash;
}
signed main()
{
    eff;
    string s;
    getline(cin,s);
    cout<<checkVaild(s);
    return 0;
}
   