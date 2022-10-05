#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
const ll INF = 1e18;
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }

void solve()
{	
	ll n;
  cin >> n;
  vector<ll> a(n + 1); 
  for(ll i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  ll i = n - 1;
  ll ans = 0;
  while(i > 0)
  {
    if(a[i] == a[n])
    {
      i--;
    }
    else
    {
      ans++;
      i-=(n - i);
    }
  }
  cout << ans <<"\n";
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

	
