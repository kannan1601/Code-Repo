#include<bits/stdc++.h>
using namespace std;
void SubSum(int ind,int n,int a[],int s,int sum,vector<int> &ds)
{
  if(ind==n)
  {
    if(s==sum)
    {
      for(auto it:ds)
    {
      cout<<it<<" ";
    }
    cout<<"\n";
    }
    return;
  }
  //take the element
  s+=a[ind];
  ds.push_back(a[ind]);
  SubSum(ind+1,n,a,s,sum,ds);
  s-=a[ind];
  ds.pop_back();

  
  //not take the element
  SubSum(ind+1,n,a,s,sum,ds);

}
int main()
{
  int a[]={1,2,1};
  int sum=2;
  vector<int>ds;
  SubSum(0,3,a,0,sum,ds);
}