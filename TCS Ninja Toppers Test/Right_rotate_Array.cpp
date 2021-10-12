// Right rotate an array ny k steps

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

void rotate(int arr[], int n, int k)
{
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    

    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
}

signed main(){
    eff;
    int n;
    cin>>n;
    int v[n];
    for(int i = 0; i < n; i++)
    cin>>v[i];

    int k;
    cin>>k;

    rotate(v,n,k);
    return 0;
}