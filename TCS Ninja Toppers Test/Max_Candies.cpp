// Lynda has three children. 
// She wants to distribute N candies among all three in such a way that exactly one child gets the maximum number of candies among all three
// and each child gets at least one candy. The task is to find the total number of ways to distribute N candies among the three children. 

// Example: 
// Input:
// 6--- Number of candies

// Output:
// 9

// Explanation:
// There are 9 ways to distribute 6 candies [1,1,4], [1,4,1], [4,1,1], [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,2,1],  and [3,1,2].

// [2,2,2], is not valid because three children will be getting the maximum number of candies i.e 2.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

int ans = 0;
void dist(int a, int i, int j)
{
    if(max(i,j) >= a-(i+j))
    return;
    if(i == j)
    {
        ans += 3;
        dist(a,i+1, j+1);
    }
    else
    ans += 6;

    dist(a, i, j+1);

}
signed main(){
    eff;
    int n;
    cin>>n;
    int i = 1, j = 1;
    dist(n,i,j);
    cout<<ans;
    return 0;
}

