// Bastin once had trouble finding the numbers in a string. The numbers are distributed in a string across various test cases. 
// There are various numbers in each test case you need to find the number in each test case. Each test case has various numbers in sequence.
//  You need to find only those numbers which do not contain 9. For eg, if the string contains "hello this is alpha 5051 and 9475".
// You will extract 5051 and not 9475. 
// You need only those numbers which are consecutive and you need to help him find the numbers. Print the largest number.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

int main()
{
  eff;
  int t;
  cin >> t;
  //cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer.
  cin.ignore();
  
  while(t--)
  {
    string s;
    getline(cin, s);
    int n = s.length();
    string res="", num = "";
    for(int i = 0; i < n; i++)
    {
      num = "";
      while(isdigit(s[i]) && s[i] != '9')
      {
        num = num + s[i];
        i++;
      }
      
      if(num != "")
      {
        long long a = stoll(num);
        long long b = -1;
        
        if(res != "")
          b = stoll(res);
        
        if(a > b)
          res = num;
      }
    }
    if(res == "")
      cout << "-1";
    else
      cout <<res << endl;
  }
  return 0;
}