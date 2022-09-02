#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	string s;
  cin>>s;
  ll p;
  cin>>p;
  ll n = s.size();
  map<ll, vector<ll>>freq;
  ll curr = 0;
  
  for(ll i=0; i<n; i++)
  {
    curr+=(s[i]-'a'+1);
    freq[s[i]-'a'+1].push_back(i);
  }
  for(ll i=26; i>=1; i--)
  {
    for(ll j=0; j<freq[i].size() && curr > p; j++)
    {
      s[freq[i][j]] = '?';
      curr-=i;
    }
  }
  for(auto x : s)
  {
    if(x!='?')
    cout<<x;
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

	
