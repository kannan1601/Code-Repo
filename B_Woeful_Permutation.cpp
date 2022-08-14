#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	int n;
  cin>>n;
  int a[n+1];
  if(n%2==0)
  {
    for(int i=1;i<=n;i++)
    {
      if(i%2==1)
      {
        a[i]=i+1;
      }
      else
      a[i]=i-1;
    }
  }
  else
  {
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
      if(i%2==0)
      {
        a[i]=i+1;
      }
      else
      a[i]=i-1;
    }
  }
  for(int i=1;i<=n;i++)
  cout<<a[i]<<" ";
  cout<<"\n";
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}

	
