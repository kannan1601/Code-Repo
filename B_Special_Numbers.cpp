#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back


bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}
vector<ll> sieve(int n) {int arr[n];for(int i = 0; i < n; i++)arr[i] = 0; vector<ll> vect; for (int i = 2; i * i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1;} return vect;}
bool isPowerofTwo(ll n){if(n == 0) return false; else return (ceil(log2(n)) == floor(log2(n)));}
ll Powermod(ll base, ll power, ll x){ll res = 1;while(power){if(power % 2 == 0){base = (base * base) % x;power/=2;}else{res = (res * base) % x; power--;}}return res;}

const ll MOD = 1000000007;


void solve()
{	
	ll n, k;
  cin >> n >> k;
  if(isPowerofTwo(k)){
    cout << Powermod(n, ceil(log2(k)), MOD) <<"\n";
  }
  else{
    ll ans = 0;
    while(k > 0){
      if(k == 1){
        ans = (ans + 1) % MOD;
        k = 0;
      }
      else if(k == 2){
        ans += n % MOD;
        k = 0;
      }
      else if(k == 3){
        ans += (n + 1) % MOD;
        k = 0;
      }
      else if(isPowerofTwo(k)){
        ans += Powermod(n, ceil(log2(k)), MOD);
        k = 0;
      }
      else{
        ll x = pow(2, floor(log2(k)));
        ans += Powermod(n, floor(log2(k)), MOD);
        k -= x;
      }
    }
    cout << ans % MOD <<"\n";

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

	
