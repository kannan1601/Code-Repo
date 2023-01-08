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
	int N, M;
  cin >> N >> M;
  vector<vector<char>> V(N, vector<char> (M));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> V[i][j];
    }
  }
  int k;
  for(int i = N - 2; i >= 0; i--){
    for(int j = M - 1; j >= 0; j--){
      if(V[i][j] == '*'){
        V[i][j] = '.';
        int flag = 0;
        for(k = i + 1; k < N; k++){
          if(V[k][j] == '.'){
            continue;
          }
          else{
            V[k - 1][j] = '*';
            flag = 1;
            break;
          }
        }
        if(flag == 0){
          V[N - 1][j] = '*';
        }
      }
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cout << V[i][j];
    }
    cout << "\n";
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

	
