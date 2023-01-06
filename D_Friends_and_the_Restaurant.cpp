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
	ll N;
  cin >> N;
  vector<ll> X(N), Y(N);
  for(int i = 0; i < N; i++){
    cin >> X[i];
  }
  for(int i = 0; i < N; i++){
    cin >> Y[i];
  }
  ll useless = 0;
  vector<ll> vl, vp;
  for(int i = 0; i < N; i++){
    if(X[i] < Y[i]){
      vp.pb(Y[i] - X[i]);
    }
    else if(X[i] > Y[i]){
      vl.pb(X[i] - Y[i]);
    }
    else
      useless++;
  }
  sort(vl.begin(), vl.end());
  sort(vp.begin(), vp.end());
  ll ans = 0;
  ll szl = vl.size();
  ll szp = vp.size();
  ll ip, il;
  ip = il = 0;
  while(ip < szp && il < szl){
    if(vp[ip] >= vl[il]){
      ip++;
      il++;
      ans++;
    }
    else if(useless > 0){
      ip++;
      useless--;
      ans++;
    }
    else if((ip + 2) < szp){
      ans++;
      ip += 2;
    }
    else{
      break;
    }
  }
  if(ip < szp){
    ans += ((useless + (szp - ip))) / 2;
  }
  else{
    ans += (useless / 2);
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

	
