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
	int days, n, id;
  cin >> days >> n >> id;
  vector<vector<int>>a(days, vector<int>(n));
  for(int i = 0; i < days; i++)
  {
    for(int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  vector<int>mx(n,0);
  for(int i = 0; i < days; i++)
  {
    for(int j = 0; j < n; j++)
    {
      mx[j] = max(mx[j], a[i][j]);
    }
  }
    --id;
    int sum = 0;
    for(int j = 0; j < n; j++)
    {
      if(a[id][j] < mx[j])
      {
        sum+=(mx[j] - a[id][j]);
      }
    }
  cout << sum <<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"Case #"<<i<<":"<<" ";
		solve();
	}
}
