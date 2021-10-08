#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

int solve(vector<int> &A, vector<int> &B) {
    int sum = 0;
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < B.size(); j++)
        {
            
            cout<<i<<" "<<j<<" "<<max((A[i]+B[j]),(A[j]+B[i]))<<endl;
            sum += max((A[i]+B[j]),(B[j]+A[i]));

        }
    }
    
    return sum;
}

signed main(){
    eff;
    int n = 2;
    vi A = {8,9};
    vi B = {9, 3};
    cout<<solve(A,B);
    return 0;
}