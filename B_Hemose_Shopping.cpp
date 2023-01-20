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

bool sorted(vector<ll> A){
  vector<ll> B = A;
  sort(B.begin(), B.end());
  for(int i = 0; i < B.size(); i++){
    if(A[i] != B[i])
      return false;
  }
  return true;
}

void solve()
{
	ll N, X;
  cin >> N >> X;
  vector<ll> A(N);
  for(ll i = 0; i < N; i++)
    cin >> A[i];
  if(X == N){
    if(sorted(A))
      cout << "YES\n";
   else
     cout << "NO\n";
  }
 else  if(X <= N / 2){
    cout << "YES\n";
    return;
  }
  else{
    ll XX = N - X;
    vector<ll> V;
    for(int i = 0; i < XX; i++)
      V.pb(A[i]);
    for(int i = N - 1; i >= N - XX; i--)
      V.pb(A[i]);

    sort(V.begin(), V.end());
    vector<ll> ans;
    for(int i = 0; i < V.size() / 2; i++)
      ans.pb(V[i]);
    for(int i = XX; i < N - XX; i++)
      ans.pb(A[i]);
    for(int i = V.size() / 2; i < V.size(); i++)
      ans.pb(V[i]);

    if(sorted(ans)){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
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

	
