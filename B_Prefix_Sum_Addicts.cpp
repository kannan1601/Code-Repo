#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
const long long INF = 1e18;
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }

void solve()
{	
	ll n, k;
  cin >> n >> k;
  vector<ll>v(k);
  for(auto &i : v) cin >> i;
  ll curr = -INF;
  if(k == 1)
  {
    cout<<"Yes\n";
    return;
  }
  for(ll i = 1; i < k; i++)
  {
    if(curr > v[i] - v[i - 1])
    {
      cout<<"No\n";
      return;
    }
    curr = v[i] - v[i - 1];
  }
  bool valid = true;
  if(v[0] > (v[1] - v[0]) * (n - k + 1)) valid = false;
  cout << (valid ? "Yes\n" : "No\n");


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

	
