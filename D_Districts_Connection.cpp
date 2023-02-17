#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
#define all(v) (v).begin(),(v).end()
typedef vector<int> vi;
typedef vector<ll> vll;
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
  vector<int> given(N + 1);
  set<int> S;
  for(int i = 1; i <= N; i++){
    cin >> given[i];
    S.insert(given[i]);
  }
  if(S.size() == 1){
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  vector<pair<int, int>> disconnected, connected;
  for(int i = 2; i <= N; i++){
    if(given[i] != given[1]){
      connected.pb({1, i});
    }
    else{
      disconnected.pb({i, -1});
    }
  }
  // for(auto it : connected){
  //   cout << it.first << " " << it.second << "\n";
  // }
  if(disconnected.size() >= 1){
    int city = -1;
    for(int i = 2; i <= N; i++){
      if(given[i] != given[1]){
        city = i;
        break;
      }
    }
    // cout << "updated city " << city << "\n";
    for(auto &it : disconnected){
      it.second = city;
    }
    for(auto it : connected){
      cout << it.first << " " << it.second << "\n";
    }
    for(auto it : disconnected){
     cout << it.first << " " << it.second << "\n"; 
    }
  }
  else{
    for(auto it : connected){
      cout << it.first << " " << it.second << "\n";
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

	
