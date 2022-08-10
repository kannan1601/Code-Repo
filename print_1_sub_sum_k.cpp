#include<bits/stdc++.h>
using namespace std;
bool OneSub(int ind,int n,int a[],int s,int sum,vector<int> &ds)
{
  if(ind == n)
  {
    if(s == sum)
    {
      for(auto it:ds)
      cout<<it<<" ";
      cout<<"\n";
      return true;
    }
    return false;
  }

  s+=a[ind];
  ds.push_back(a[ind]);
  if(OneSub(ind+1,n,a,s,sum,ds) == true){
    return true;
  }
  s-=a[ind];
  ds.pop_back();
  if(OneSub(ind+1,n,a,s,sum,ds) == true)
  {
    return true;
  }
  return false;


}
int main()
{
  int a[]={1,2,1};
  int sum=2;
  vector<int>ds;
  OneSub(0,3,a,0,sum,ds);
}