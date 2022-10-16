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
  vector<ll>prefix_sum(n, 0);
  vector<ll>prefix_max(n, 0);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  prefix_sum[0] = a[0];
  prefix_max[0] = a[0];
  for(int i = 1; i < n; i++)
  {
    prefix_max[i] = max(prefix_max[i - 1], a[i]);
    prefix_sum[i] = prefix_sum[i - 1] + a[i];
  }
  while(q--)
  {
    ll search;
    cin >> search;
    ll low = 0;
    ll high = n - 1;
    ll ans = 0;
    while(low <= high)
    {
      ll mid = (low + high) / 2;
      if(prefix_max[mid] <= search)
      {
        ans = prefix_sum[mid];
        low = mid + 1;
      }
        
      else
        high = mid - 1;
    }
    cout << ans <<" ";

  }
  cout << "\n";
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

	
