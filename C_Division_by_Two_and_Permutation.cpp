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
	int n;
  cin >> n;
  ll a[n + 1];
  vector<int> have(n + 1, 0);
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++)
  {
    int temp = a[i];
    while(temp != 0)
    {
      if(temp <= n && have[temp] == 0)
      {
        have[temp]++;
        break;
      }
      temp = temp / 2;
    }
  }
  for(int i = 1; i <= n; i++)
  {
    if(have[i] == 0)
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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

	
