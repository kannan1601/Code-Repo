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
  vector<int> A(N);
  
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  if(N == 3 && A[1] % 2){
    cout << "-1\n";
    return;
  }
  ll ans = 0;
  int any = 0;
  for(int i = 1; i < N - 1; i++){
    if(A[i] != 1){
      any = 1;
      break;
    }
  }
  if(any == 0){
    cout << "-1\n";
    return;
  }
  for(int i = 1; i < N - 1; i++){
    if(A[i] % 2 ){
      ll add = (A[i] / 2) + 1;
      ans += add;
    }
    else{
      ll add = A[i] / 2;
      ans += add;
    }
  }
  cout << ans <<"\n";
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

	
