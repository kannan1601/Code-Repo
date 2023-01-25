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
  vector<int> odd;
  vector<int> even;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    if(A[i] % 2 == 1)
      odd.pb(i + 1);
    else
      even.pb(i + 1);
  }
  if(odd.size() == 0){
    cout << "NO\n";
  }
  else{
    if(odd.size() >= 3){
      cout << "YES\n";
      for(int i = 0; i < 3; i++){
        cout << odd[i] << " ";
      }
      cout << "\n";
    }
    else{
      if(even.size() >= 2 && odd.size() >= 1){
        cout << "YES\n";
        for(int i = 0; i < 2; i++){
          cout << even[i] << " ";
        }
        cout << odd[0] <<  "\n";
      }
      else{
        cout << "NO\n";
      }
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

	
