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
  int n;
  cin >> n;
	string s;
  cin >> s;
  int one = 0, zero = 0;
  for(int i = 0; i < n; i++)
  {
    if(s[i] == '0')
      zero++;
    else
      one++;
  }
  int x = zero  % 2;
  int y = one % 2;
  if(x == 1 && y == 1)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
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

	
