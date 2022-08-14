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
  vector<ll> ans(n);
  ll r=n-1;
  while(r>0)
  {
    ll s = ceil(sqrt(r));
    ll diff = (s*s)-r;
    for(int i=r;i>=diff;i--)
    {
      ans[i]=(s*s)-i;
    }
    r=diff-1;

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

	
