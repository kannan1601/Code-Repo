#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  cout<<"{}\n";
  for(int possi=1; possi<(1<<n); possi++)
  {
    for(int i=0; i<n; i++)
    {
      if(((1<<i)&possi)!=0)
      {
        cout<<s[i];
      }
    }
    cout<<"\n";
  }
}
//Time complexity will be 2^n for outer loop and n for inner loop so O(2^n * n)
// Space complexity will be O(1)