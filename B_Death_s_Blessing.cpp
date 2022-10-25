#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}

void solve()
{	
	ll n;
  cin >> n;
  ll a[n];
  ll b[n];
  ll ans = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    ans+=a[i];
  }
  for(int i = 0; i < n; i++)
  {
    cin >> b[i];
    ans+=b[i];
  }
  ll mx = INT64_MIN;
  for(int i = 0; i < n; i++)
  {
    if(b[i] > mx)
    {
      mx = b[i];
    }
  }
  cout << ans - mx <<"\n";
  
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

	
