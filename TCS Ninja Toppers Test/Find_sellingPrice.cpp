// In a shop every item has an alphanumeric code printed on the label. 
// Each consecutive sequence of the digit in a code is to be readed as a multi digit number. 
// The selling price of the product is the sum of the number in the code.
// You are given the alphanumeric code for an item as a string Str. your task is to compute the selling price of the item.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main(){
    eff;
    string s;
    getline(cin,s);
    string n = "";
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
    {
        while(isdigit(s[i]))
        {
            n += s[i];
            i++;
            //cout<<n<<" ";
        }
        
            //cout<<n<<endl;
        if(n != "")
        sum += stoi(n);

        n = "";
    }

    cout<<sum;
    return 0;
}
