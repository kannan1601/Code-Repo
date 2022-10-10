#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
const ll INF = 2e18;
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }

void solve()
{	
	int a, b;
  cin >> a >> b;
  int ans = INT_MAX;
  for(int i = 0; i < 32; i++)
  {
    if(b + i == 1)
    {
      continue;
    }
    int cnt = 0, temp = a;
    while(temp != 0)
    {
      cnt++;
      temp/=(b + i);
    }
    ans = min(ans, (cnt + i));
  }
  cout << ans <<"\n";
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

	
