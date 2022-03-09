// Minimum addition

// You are given an integer N. you have to divide the number into two numbers P1 and P2 such that:
// 1) Each digit of N should belong to exactly one of P1 or one of P2 and this, 
//    and this in turn, would utilize every digit of the number N.
// 2) Form the number P1 and P2 in a manner such that their sum is minimum.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main()
{
          eff;
          int n;
          cin>>n;
          int m = log2(n) + 1;
          vi v(m);
          for(int i = 0; i < m; i++)
          {
                    v[i] = n%10;
                    n = n/10;
          }

          sort(v.begin(), v.end());
          int p1 = 0, p2 = 0;
          for(int i = 0; i < m; i++)
          {
                    if(i%2)
                       p1 = p1*10 + v[i];
                    else
                       p2 = p2 *10 +v[i];
                      
          }
          cout<<p1+p2<<endl;
          return 0;
}
// 4891
// 1489

// 18 49 -> 18+49 = 67
