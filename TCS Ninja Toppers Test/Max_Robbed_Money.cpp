// You are a professional robber planning to rob houses along a street.
// Each house has a certaing amount of money stashed, 
// the only constraint stopping you from robbing each of them is that adjacent house have securiy systems connected
// and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Your task is to return the max amount of money you can rob toningt without alerting the police.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>


int maxMoney(int arr[], int n)
{

    // Method 1:
    // int s1 = 0, s2= 0;
    // for(int i = 0; i < n; i++)
    // {
    //     if(i % 2 == 0)
    //     s2 += arr[i];
    //     else
    //     s1 += arr[i];
    // }

    // return max(s1,s2);


    // Method 2:
    int dp[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0],arr[1]);
    for(int i = 2; i < n; i++)
    {
        dp[i] = max(arr[i]+dp[i-2], dp[i-1]);
    }

    return dp[n-1];
}
signed main(){
    eff;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    cout<<maxMoney(arr,n);
    return 0;
}