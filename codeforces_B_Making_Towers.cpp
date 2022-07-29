#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	ll n;
  cin>>n;
  vector<ll> given(n,0);
  vector<ll> ans(n,0);
  vector<ll> mp(n,-1);
  for(int i=0;i<n;i++)
  {
    cin>>given[i];
  }
  for(int i=0;i<n;i++)
  {
    if(mp[given[i]-1] == -1)
    {
        mp[given[i]-1]=i%2;
    }
    if(mp[given[i]-1]!=i%2)
    {
      ans[given[i]-1]++;
      mp[given[i]-1]=i%2;
    }
  }
  for(int i=0;i<n;i++)
  {
    if(mp[i]!=-1)
    {
      ans[i]++;
    }
  }
  for(auto it:ans)
  cout<<it<<" ";
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

	
