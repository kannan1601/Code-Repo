#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
int fact[10];
void solve()
{	
	int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
  cin >> a[i];
  
  int rem = 10 - n;
  int x = fact[rem];
  int y = fact[rem - 2] * fact[2];
  int ans = x/y;
  ans*=6;
  cout << ans <<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
  fact[0] = fact[1] = 1;
  for(int i = 2; i <= 10; i++)
  {
    fact[i] = i * fact[i - 1];
  }
	while(t--)
	{
		solve();
	}
}

	
