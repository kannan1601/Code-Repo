#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	int n,k;
  cin>>n>>k;
  int a[n+1];
  int count=0;
  for(int i=1;i<=n;i++)
  {
     cin>>a[i];
     
  }
  for(int i=1;i<=k;i++)
  {
    if(a[i]>k)
     count++;
  }
  cout<<count<<"\n";
 
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

	
