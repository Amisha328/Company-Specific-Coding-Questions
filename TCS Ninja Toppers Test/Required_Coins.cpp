// Find the minimum number of coins required to form any value between 1 to N. 
// Cumulative value of coins should not exceed N.
// Coin denominations are 1 Rupee, 2 Rupee and 5 Rupee.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n;
    cin>>n;
    
    int one = 0;
    // number of 5 rupees coin
    int five = (n - 4)/5;

    // check if number after excluding 5 rupee coin is even 
    if((n - 5*five) % 2 == 0)
    one = 2; // if even 2 ones will be required
    else
    one = 1; // if odd only 1 ones will be required

    // now finding the number of 2's after excluding 5 rupee and 1 rupee coins
    int two = (n - 5*five - one)/2;

    cout<<(five+one+two);

    return 0;
}