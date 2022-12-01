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
	ll N,K;
  cin >> N >> K;
  vector<ll> A(N);
  ll sum = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
	vector<ll> B(N);
	ll mini = INT64_MAX;
	int indx;
  for(int i = 0; i < N; i++){
		ll x = A[i];
		while(x%K == 0){
			B[i]++;
			x/=K;
		}
		if(B[i] < mini){
			mini = B[i];
			indx = i;
		}
	}
	for(int i = 0; i < N; i++){
		sum+=(mini + 1LL)*A[i];
	}
	for(int i = 0; i < indx; i++){
		sum+=A[i];
	}
	cout << sum <<"\n";

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

	
