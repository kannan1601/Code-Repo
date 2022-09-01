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
  string s;
  cin>>s;
  vector<ll>ans(1);
  for(ll i=0;i<n;i++)
  {
    if(s[i]=='L')
      ans[0]+=i;
    else
      ans[0]+=n-i-1;
  }
  for(ll i=0;i<n/2;i++)
  {
    if(s[i]=='L')
    {
      s[i]='R';
      ans.push_back(ans.back()+(n-i-1)-i);
    }
    if(s[n-i-1]=='R')
    {
      s[n-i-1]='L';
      ans.push_back(ans.back()+(n-i-1)-i);
    }
  }
  while(ans.size()<n+1)
  {
    ans.push_back(ans.back());
  }
  for(ll i=1;i<n+1;i++)
  {
    cout<<ans[i]<<" ";
  }
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

	
