// For hiring a car, a travel agency charges R1 rupees per hour for the first N hours and then R2 rupees per hour. Given the total time of travel in minutes in X.
// The task is to find the total travelling cost in rupees.
// Note : While converting minutes into hours, ceiling value should be considered as the total number of hours.
// For example : If the total travelling time is 90 minutes, i.e. 1.5 hours, it must be considered as 2 hours.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int r1, n, r2, x;
    cin>>r1>>n>>r2>>x;

    x = ceil(x/60);
    if(x <= n)
    {
        cout<<x*r1;
    }
    else{
        int sum = (n * r1);
        sum += (x-n)*r2;

        cout<<sum;
    }
    return 0;
}
