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
  if(n % 2)
  {
    cout<<"NO\n";
    return;
  }
  ll x = n/2;
  ll sq = sqrt(x);
  if(sq * sq == x)
  {
    cout<<"YES\n";
    return;
  }
  sq = sqrt(n);
  if(sq % 2 == 0 && sq*sq == n)
  {
    cout<<"YES\n";
    return;
  }
  cout<<"NO\n";

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

	
