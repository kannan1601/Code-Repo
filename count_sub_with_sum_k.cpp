#include<bits/stdc++.h>
using namespace std;
int sub(int ind,int n,int a[],int s,int sum)
{
  if(ind == n)
  {
    if(s == sum)
    {
      return 1;
    }
    return 0;
  }
  //take the element
  s+=a[ind];
  int left = sub(ind+1,n,a,s,sum);
  s-=a[ind];
  //not take the element
  int right = sub(ind+1,n,a,s,sum);
  return left+right;
}
int main()
{
  int a[]={1,2,1};
  int sum=2;
  cout<<sub(0,3,a,0,sum);
}