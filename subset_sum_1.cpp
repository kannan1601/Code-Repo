#include<bits/stdc++.h>
using namespace std;

void subsetsum(int ind,int n,int sum,int a[],vector<int> &ds,vector<int> &ans)
{
  if(ind == n)
  {
 
    ans.push_back(sum);
    sum=0;
    return;
  }
  //take element 
  sum+=a[ind];
  ds.push_back(a[ind]);
  subsetsum(ind+1,n,sum,a,ds,ans);
  sum-=a[ind];
  ds.pop_back();

  //not pick
  subsetsum(ind+1,n,sum,a,ds,ans);

}

int main()
{
  int a[]={5,2,1};
  vector<int>ds;
  vector<int>ans;
  subsetsum(0,3,0,a,ds,ans);
  sort(ans.begin(),ans.end());
  for(auto it:ans)
  cout<<it<<" ";
}