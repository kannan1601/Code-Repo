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
bool mapcomp(pair<int,int> &a, pair<int,int> &b){return a.second > b.second;}

const ll MOD = 1000000007;

void solve()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  int ans = INT_MAX;
  for(int col = 1; col <= 100; col++){
    int pos = 0;
    int count = 0;
    while(pos < N){
      if(A[pos] == col) pos++;
      else{
        count++;
        pos+=K;
      }
    }
    ans = min(ans, count);
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

	
