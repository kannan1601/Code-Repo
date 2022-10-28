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
	ll x, y, z;
  cin >> x >> y >> z;
  ll a[z];
  ll b[z];
  for(int i = 0; i < z; i++)
    cin >> a[i];
  ll sum = 0;
  for(int i = 0; i < z; i++)
  {
    cin >> b[i];
    sum+=((b[i] + x - 1) / x * a[i]);
  }
  sort(a, a + z);
  sum-=a[z - 1];
  cout << (y - sum > 0  ? "YES\n" : "NO\n" ); 
    
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

	
