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
	ll n,x,t;
  cin>>n>>x>>t;

  if(t < x)
  {
    cout<<"0\n";
    return;
  }
  ll first = t/x;
  if(first >= n - 1)
  {
    ll ans = n - 1;
    ans = (ans * (ans + 1))/2;
    cout<<ans<<"\n";
  }
  else
  {
    ll ans = t/x;
    ll ans1 = (ans * (ans + 1))/2;
    ll ans2 = (n - ans - 1)*ans;
    cout<<ans1 + ans2<<"\n";
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

	
