#include<bits/stdc++.h>
using namespace std;
int main()
{
  int base,power;
  cin>>base>>power;
  int res = 1;

  while(power)
  {
    if(power % 2 == 0)
    {
      base*=base;
      power/=2;
    }
    else
    {
      res*=base;
      power--;
    }
  }
  cout<<res;
}