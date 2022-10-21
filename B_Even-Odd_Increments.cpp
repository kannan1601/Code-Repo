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
	ll n, q;
  cin >> n >> q;
  ll a[n];
  ll odd = 0, even = 0, sum = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum+=a[i];
    if(a[i] & 1)
      odd++;
    else
      even++;
  }
  while(q--)
  {
    ll x, y;
    cin >> x >> y;
    if(x)
    {
      sum+=(odd * y);
      if(y & 1)
      {
        even+=odd;
        odd = 0;
      }
    }
    else
    {
      sum+=(even * y);
      if(y & 1)
      {
        odd+=even;
        even = 0;
      }
    }
    cout << sum <<"\n";
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

	
