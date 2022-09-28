#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
void solve()
{	
	ll n;
  cin >> n;
  ll a[n];
  vector<ll>psum(n + 1);
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
    if(a[i] == 0)
      psum[i + 1] = 1;
    else
      psum[i + 1] = 0;
  }
  for(int i = 1; i <= n; i++)
  {
    psum[i] = psum[i] + psum[i - 1];
  }
  
  ll ans = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = i; j < n; j++)
    {
      ans+=(j - i + 1);
      ans+=(psum[j + 1] - psum[i]);
    }
  }
  cout<<ans<<"\n";
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

	
