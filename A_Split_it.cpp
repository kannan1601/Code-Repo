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
	int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int flag = 0;
  for(int i = 0; i < k; i++)
  {
    if(s[i] == s[n - i -1])
    {
      continue;
    }
    else
    {
      flag = 1;
      break;
    }
  }
  if(flag == 0 && 2*k < n)
    cout << "YES\n";
  else
     cout << "NO\n";
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

	
