#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
void solve()
{	
	ll n;
  cin >> n;
  ll x;
  vector<ll>odd,even;
  for(int i = 0; i < n; i++)
  {
    cin >> x;
    if(x % 2)
      odd.pb(x);
    else 
      even.pb(x);
  }
  vector<ll>sorted_odd = odd,sorted_even = even;
  sort(sorted_odd.begin(),sorted_odd.end());
  sort(sorted_even.begin(),sorted_even.end());

  if( sorted_odd == odd && sorted_even == even)
  cout<<"Yes\n";
  else
  cout<<"No\n";
  
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

	
