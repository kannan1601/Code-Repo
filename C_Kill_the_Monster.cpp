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
	ll Charhealth, Charattack, Monhealth, Monattack, k, w, a;
  cin >> Charhealth >> Charattack >> Monhealth >> Monattack >> k >> w >> a;
 
  for(ll i = 0; i <= k; i++)
  {
    ll k1 = i;
    // Charhealth += (k2 * a);
    // Charattack += (k1 * w);
    ll  ca = (k1 * w) +  Charattack;
    ll  ch = ((k - i) * a) + Charhealth;
    

    // ll val1 = (Monhealth + Charattack - 1)/Charattack;
    // ll val2 = (Charhealth + Monattack - 1)/Monattack;

    ll val1 = (Monhealth + ca - 1)/ca;
    ll val2 = (ch + Monattack - 1)/Monattack;
    if(val1 <= val2)
    {
      cout<<"YES\n";
      return;
    }
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

	
