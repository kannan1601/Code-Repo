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
  set<int> s;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    s.insert(A[i]);
  }
  if(s.size() == 1){
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  sort(A.begin(), A.end());
  int i = 0, j = N - 1;
  while(i <= j){
    if(i == j){
      cout << A[i] <<" ";
      break;
    }
    else{
      cout << A[j] <<" " << A[i] <<" ";
      j--;
      i++;
    }
  }
  cout << "\n";

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

	
