#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
const ll MOD = 1000000007;

bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}
vector<ll> sieve(int n) {int arr[n];for(int i = 0; i < n; i++)arr[i] = 0; vector<ll> vect; for (int i = 2; i * i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1;} return vect;}
bool isPowerofTwo(ll n){if(n == 0) return false; else return (ceil(log2(n)) == floor(log2(n)));}
ll Powermod(ll base, ll power, ll x){ll res = 1;while(power){if(power % 2 == 0){base = (base * base) % x;power/=2;}else{res = (res * base) % x; power--;}}return res;}
ll inv(ll i) {if (i == 1) return 1; return (MOD - ((MOD / i) * inv(MOD % i)) % MOD) % MOD;}


void solve()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
	ll ans = INT64_MAX;
	for(int i = 0; i < 26; i++){
		ll cnt = 0;
		char ch = 'a';
		ch+=i;
		bool ok = true;
		ll l = 0, r = N - 1;
		while(l < r){
			if(S[l] == S[r]){
				l++;
				r--;
			}
			else if(S[l] == ch)
			{
				cnt++;
				l++;
			}
			else if(S[r] == ch){
				cnt++;
				r--;
			}
			else{
				ok = false;
				break;
			}
		}
		if(ok)
			ans = min(ans, cnt);
	}
	if(ans == INT64_MAX)
		ans = -1;
	cout << ans << "\n";

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

	
