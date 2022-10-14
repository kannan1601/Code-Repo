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
  ll a[n];
  set<int>s;
  for(int i = 0; i < n ;i++)
  {
    cin >> a[i];
    s.insert(a[i]);
  }
  if(n == 1)
  {
    cout << "YES\n";
    return;
  }
  if(s.size() == n)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
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

	
