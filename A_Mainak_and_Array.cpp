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
	int n;
  cin>>n;
  int a[n];
  int ans = INT_MIN;
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  for(int i = 0; i < n; i++)
  {
    ans = max(ans,a[(i-1+n)%n] - a[i]);
  }
  for(int  i = 1; i < n; i++)
  {
    ans = max(ans,a[i] - a[0]);
  }
  for(int i = 0; i < n-1; i++)
  {
    ans = max(ans,a[n-1] - a[i]);
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

	
