#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
  ll n,q;
  cin>>n>>q;
  vector<ll> v(n);
  map<ll,ll> left,right;
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
    if(!left[v[i]])
    {
      left[v[i]] = i+1;
    }
    right[v[i]] = i+1;
  }
  while(q--)
  {
    ll l,r;
    cin>>l>>r;
    if(left[l] && right[r])
    {
      if(left[l]<right[r])
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }
    else
      cout<<"NO\n";
  }
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

	
