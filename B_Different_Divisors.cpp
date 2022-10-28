#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}
vector<ll> sieve(int n) {int arr[n];for(int i = 0; i < n; i++)arr[i] = 0; vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

ll search(ll a, vector<ll> prime)
{
  int start = 0;
  int end = prime.size() - 1;
  ll ans = INT64_MAX;
  while(start <= end)
  {
    ll mid = (start + end) / 2;
    if(prime[mid] >= a)
    {
      ans = min(ans, prime[mid]);
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}
void solve()
{	
	int t;
  cin >> t;
  vector<ll> prime = sieve(100000 + 1);
  while(t--){
    int d;
    cin >> d;
    ll p1 = 1;
    ll p2 = search(p1 + d, prime);
    ll p3 = search(p2 + d, prime);
    cout << p2 * p3 <<"\n";
  }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  solve();
}

	
