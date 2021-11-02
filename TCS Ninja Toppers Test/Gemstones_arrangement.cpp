// There is a bag with three types of gemstones: Ruby of type R, Garnet of G, and Topaz of type T.
// Write a program to find the total number of possible arrangements to make a series of gemstones
// where no two gemstones of the same type are adjacent to each other.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 100

int dp[MAX][MAX][MAX][3];

int countWays(int p, int q, int r, int last)
{
    if(p < 0 || q < 0 || r < 0)
    return 0;

    if(p == 1 && q == 0 && r == 0 && last == 0)
    return 1;

    if(p == 0 && q == 1 && r == 0 && last == 1)
    return 1;

    if(p == 0 && q == 0 && r == 1 && last == 2)
    return 1;

    if(dp[p][q][r][last] != -1)
    return dp[p][q][r][last];

    if(last == 0)
    dp[p][q][r][last] = countWays(p-1, q, r, 1) + countWays(p-1, q, r, 2);

    else if(last == 1)
    dp[p][q][r][last] = countWays(p, q-1, r, 0) + countWays(p, q-1, r, 2);

    else
    dp[p][q][r][last] = countWays(p, q, r-1, 0) + countWays(p, q, r-1, 1);

    return dp[p][q][r][last];
}
signed main(){
    eff;
    int p, q, r;
    cin>>p>>q>>r;
    // / Initialize 'dp' array
    memset(dp, -1, sizeof(dp));
    cout<<(countWays(p, q, r, 0) + countWays(p, q, r, 1) + countWays(p, q, r, 2));
    return 0;
}
