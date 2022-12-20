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
	int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N, vector<int>(M, 0));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> A[i][j];
    }
  }
  vector<int> row(N);
  vector<int> col(M);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(A[i][j] == 1)
        row[i] = col[j] = 1;
    }
  }
  string winner = "Ashish";
  int p = 1;
  bool first_time = false;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(row[i] == 0 && col[j] == 0){
        first_time = true;
        if(p == 1){
          row[i] = 1;
          col[j] = 1;
          winner = "Ashish";
          p^=1;
        }
        else{
          winner = "Vivek";
          row[i] = 1;
          col[j] = 1;
          p^=1;
        }
      }
    }
  }
 if(first_time == false){
  cout << "Vivek\n";
 }
 else{
  cout << winner <<"\n";
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

	
