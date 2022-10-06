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
  vector<int> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> ans(n);
  int rem = 0;
  for(int i = n - 1; i >= 0; i--)
  {
    rem = max(rem, a[i]);
    if(rem > 0)
    {
      ans[i] = 1;
      rem--;
    }
  }
  for(int i = 0; i < n; i++)
  {
    cout << ans[i] <<" ";
  }
  cout <<"\n";
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

	
