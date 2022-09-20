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
	ll n, k;
  cin>>n>>k;
  int a[n];
  for(int i = 0;i < n; i++)
  {
    cin>>a[i];
  }
  vector<int>mx(k);
  for(int i = 0; i < n; i++)
  {
    mx[i%k] = max(mx[i % k], a[i]);
  }
  ll sum = 0;
  for(int i = 0;i < k;i++)
  {
    sum+=mx[i];
  }
  cout<<sum<<'\n';
  
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

	
