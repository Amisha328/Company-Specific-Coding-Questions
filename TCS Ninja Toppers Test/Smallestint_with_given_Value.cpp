// Find the smallest integer value 'b' for the given value of 'a'. 
// If we multiply the digits of 'b', we should get the exact value of 'a'.
// result 'b' must contain more than one digits.

// input: 56
// Output: 78 (7*8 = 56)

// input: 150
// output: 556 (5*5*6 = 150)

// input: 13
// output: Not possible


#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

void findMin(int n)
{
    vi v;
    // case: 1
    // n is signle digit then we can multiply it will 1 to get the exact value
    if(n < 10)
    {
        cout<< n+10 << endl;
        return;
    }

    // case: 2
    // we will keep on checking the number from 9 to 2 which divides the number
    // reduces the number by its divisor and add the divisor to the vector
    for(int i = 9; i > 1; i--)
    {
        // we have used the while loop as it may be possible that same number may be repeated like 5 * 5 = 25
        while(n % i == 0)
       {
            n/=i;
            v.push_back(i);
       }
        
    }
    // case: 3
    // if the number is not divisible by any number from 9 to 2 then we can't find the smallest number
    if(n > 10)
    {
        cout<<"Not possible"<<endl;
        return;
    }

    // print the digits in reverse order.
    for(int i = v.size()-1; i >= 0; i--)
    {
        cout<<v[i];
    }
}
signed main(){
    eff;
    int n;
    cin>>n;

    findMin(n);
    return 0;
}

// Time Complexity: O(n)
// Auxiliary Space: O(n)