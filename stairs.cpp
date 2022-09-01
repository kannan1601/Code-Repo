//Recursion

#include<bits/stdc++.h>
using namespace std;
int stairs(int ind,int n)
{
  if(ind == n)
  {
    return 1;
  }
  if(ind > n)
  {
    return 0;
  }
  int left = stairs(ind + 1, n);
  int right = stairs(ind + 2, n);
  return left + right;
}
int main()
{
  int n;
  cin>>n;
  cout<<stairs(0,n);
}
// If we carefully observe this problem, the problem boils down to find the nth fibonacci