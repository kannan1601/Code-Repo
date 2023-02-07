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
	int N, M;
  cin >> N >> M;
  map<int,int> mpp;
  for(int i = 0; i < N; i++){
    int x;
    cin >> x;
    mpp[x % M]++;
  }
  int total = 0;
  for(auto it : mpp){
    if(it.first == 0 && it.second > 0){
      total++;
    }
    else if(it.first == M - it.first){
      total++;
      mpp[it.first] = 0;
    }
    else if(mpp[M - it.first] == 0){
      total += it.second;
      mpp[it.first] = 0;
    }
    else{
      int a = it.second;
      int b = mpp[M - it.first];
      if(abs(a - b) <= 1){
        total++;
        mpp[it.first] = 0;
        mpp[M - it.first] = 0;
      }
      else{
        if(a > b){
          a -= (b + 1);
          total++;
          total += a;
        }
        else{
          b -= (a + 1);
          total++;
          total += b;
        }
        mpp[it.first] = 0;
        mpp[M - it.first] = 0;
      }
    }
  }
  cout << total << "\n";

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

	
