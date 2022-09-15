#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
void solve()
{	
	string s;
  cin>>s;
  int n = s.size();
  vector<vector<int>>index(27);
  vector<ll>ans;
  for(int i = 0; i < n; i++)
  {
    index[s[i] - 96].pb(i+1);
  }
  ll m = 0,l;
  int cost = abs(s[0] - s[n-1]);
  if(s[0] <= s[n-1])
  {
    for(int i = s[0]- 96; i<=s[n-1] - 96; i++)
    {
      l = index[i].size();
      m+=l;
      for(int j = 0; j < l; j++)
      {
        ans.pb(index[i][j]);
      }
    }
  }
  else
  {
    for(int i = s[0]- 96; i>=s[n-1] - 96; i--)
    {
      l = index[i].size();
      m+=l;
      for(int j = 0; j < l; j++)
      {
        ans.pb(index[i][j]);
      }
    }
  }
  cout<<cost<<" "<<m<<"\n";
  for(auto it : ans)
  {
    cout<<it<<" ";
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

	
