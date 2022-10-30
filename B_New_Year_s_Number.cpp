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
	ll n;
  cin >> n;
  if(n < 2020){
    cout << "NO\n";
    return;
  }
  if(n % 2020 == 0 || n % 2021 == 0)
  {
    cout << "YES\n";
    return;
  }
  ll tmp = n;
  while(1)
  {
    if(tmp < 2020)break;
    tmp-=2020;
    if(tmp % 2021 == 0)
    {
      cout << "YES\n";
      return;
    }
  }
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

	
