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
  int a[n];
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a,a + n);
  int ans =INT_MAX;
  for(int i = 2; i < n; i++)
  {
    ans=min(ans,a[i]-a[i-2]);
  }
  cout<<ans<<"\n";
  
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

	
