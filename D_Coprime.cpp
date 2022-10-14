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
  ll a[n + 1];
  vector<ll> freq(1001, 0);
  vector<ll> index(1001, 0);
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
    freq[a[i]]++;
    index[a[i]] = i;
  }
  int mx = -1;
  for(int i = 1; i <= 1000; i++){
    for(int j = 1; j <= 1000; j++){
      if(freq[i] && freq[j] && __gcd(i,j) == 1)
      {
          int ans = index[i] + index[j];
          mx = max(mx,ans);
      }
    }
  }
  if(mx == 0)
  {
    cout << "-1\n";
  }
  else
  {
    cout << mx <<"\n";
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

	
