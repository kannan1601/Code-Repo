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
  int N;
  cin >> N;
  vector<vector<char>> S(N, vector<char>(N));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> S[i][j];
    }
  }
  vector<pair<int,int>> ans;
  char a = S[0][1], b = S[1][0], c = S[N - 1][N - 2], d = S[N - 2][N - 1];
  if(a == b){
    if(a == c)
      ans.pb({N, N - 1});
    if(a == d)
      ans.pb({N - 1, N});
  }
  else if(c == d){
    if(c == a){
      ans.pb({1,2});
    }
    if(c == b){
      ans.pb({2,1});
    }
  }
  else{
    ans.pb({2,1});
    if(a == c){
      ans.pb({N, N - 1});
    }
    if(a == d){
      ans.pb({N - 1, N});
    }
  }
  cout << ans.size() << "\n";
  for(auto it : ans){
    cout << it.first << " " << it.second <<"\n";
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

	
