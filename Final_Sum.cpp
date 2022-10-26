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
	ll n, q;
  cin >> n >> q;
  ll a[n];
  ll x, y, sum = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum+=a[i];
  }
  while(q--)
  {
    cin >> x >> y;
    if((y - x + 1) % 2 == 1)
      sum++;
  }
  cout << sum <<"\n";
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

	
