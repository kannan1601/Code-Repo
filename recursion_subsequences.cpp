#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int n,int a[],vector<int> &ds)
{
  if(ind == n)
    {
      if(ds.size()==0)
      cout<<"{}";
      else
      {
          for(auto it:ds)
          {
            cout<<it<<" ";
          }
      }
      
      
      cout<<"\n";
      return;
    }
    //take the element 
    ds.push_back(a[ind]);
    subsequence(ind+1,n,a,ds);
    ds.pop_back();

    //not take the element
    subsequence(ind+1,n,a,ds);
   

}
int main()
{
  int a[]={1,2,4};
  vector<int>ds;
  subsequence(0,3,a,ds);
}