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
  cin>>n;
  ll a[n];
  ll sum = 0;
  for(ll i = 0;i < n; i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  if(sum % n == 0)
  {
    cout<<"0\n";
  }
  else
  {
    ll b = n - (sum % n);
    ll c = sum % n;
    cout<<b*c<<"\n";
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

	
