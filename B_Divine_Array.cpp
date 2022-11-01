#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}
vector<ll> sieve(int n) {int arr[n];for(int i = 0; i < n; i++)arr[i] = 0; vector<ll> vect; for (int i = 2; i * i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1;} return vect;}

void solve()
{	
	int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int k = 0;
  vector<vector<ll>> ans(n + 1, vector<ll>(n + 1));
  for(int i = 0; i < 1; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      ans[i][j] = a[k];
      k++;
    }
  }
  for(int i = 1; i <= n; i++)
  {
    vector<int> cnt(n + 1, 0);
    for(int j = 1; j <= n; j++)
      cnt[ans[i - 1][j]]++;
    for(int j = 1; j <= n; j++)
      ans[i][j] = cnt[ans[i - 1][j]];
  }
  // for(int i = 0; i <= n/2; i++){
  //   for(int j = 1; j <= n; j++){
  //     cout << ans[i][j] <<" ";
  //   }cout <<"\n";
  // }
  int q;
  cin >> q;
  while(q--)
  {
    int c, k;
    cin >> c >> k;
    if(k > n)
      k = n;
    cout << ans[k][c] <<"\n";
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
