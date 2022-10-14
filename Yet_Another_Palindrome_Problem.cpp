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
	ll n;
  cin >> n;
  ll a[n];
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int flag = 0;
  for(int i = 0; i < n/2; i++){
    if(a[i] == a[n - i -1])
    continue;
    else
    {
      flag = 1;
      break;
    }
  }
  if(!flag)
  {
    cout << "0\n";
    return;
  }
  bool ok = 1;
  for(int i = 1; i < n; i++)
  {
    if(a[i] < a[i - 1])
    {
      ok = 0;
      break;
    }
  }
  if(ok == 0)
  {
    cout << "-1\n";
  }
  else
  {
    cout << a[n - 1] - a[0] <<"\n";
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

	
