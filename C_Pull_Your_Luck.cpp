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

// ll A[100005];
// void precalc(){
//   ll sum = 0;
//   for(int i = 1; i <= 100001; i++){
//     sum += i;
//     A[i] = sum;
//   }
// }

void solve()
{
  ll N, X, P;
  cin >> N >> X >> P;
  // cout << A[5] << '\n';
  ll rem = N - X;
  if(X != 0){
    for(ll i = 1; i <= 2*N && i <= P; i++){
      if(((i * (i + 1) / 2) % N == rem)){
        cout << "YES\n";
        return;
      }
    }
  }
  else{
    for(ll i = 1; i <= 2*N && i <= P; i++){
      if(((i *(i + 1) / 2) % N == 0)){
        cout << "YES\n";
        return;
      }
    }
  }
  cout << "NO\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  // precalc();
  while(t--)
  {
    solve();
  }
}

  
