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
	string s;
  cin >> s;
  int n = s.size();
  vector<int> a[2];
  for(int i = 0; i < n; i++)
  {
    if((s[i] == s[i + 1])){
        a[s[i] - '0'].pb(i);
    }
  }
  if(a[0].empty() || a[1].empty())
  {
    cout << "YES\n";
    return;
  }
  if(a[0].back() < a[1].front())
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
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

	
