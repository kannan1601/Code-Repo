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
  string S;
  cin >> S;
  int N = S.length();
  vector<int> left_count(N + 1, 0);
  vector<int> right_count(N + 1, 0);
  // left_count[0] = (S[0] == '(');
  for(int i = 0; i < N; i++){
    left_count[i + 1] = left_count[i] + (S[i] == '(');
  }
  // right_count[N - 1] = (S[N - 1] == ')');
  for(int i = N - 1; i >= 0; i--){
    right_count[i] = right_count[i + 1] + (S[i] == ')');
  }

  int equal = -1;
  for(int i = 0; i <= N; i++){
    if(left_count[i] == right_count[i]){
      equal = i;
      break;
    }
  }
  if(equal == -1){
    cout << "0\n";
    return;
  }
  vector<int> ans;
  for(int i = 0; i < N; i++){
    if(i < equal){
      if(S[i] == '(') ans.pb(i + 1);
    }
    else if(S[i] == ')'){
      ans.pb(i + 1);
    }
  }

  if(ans.empty()){
    cout << "0\n";
    return;
  }
  cout << "1\n";
  cout << ans.size() << "\n";
  for(auto i : ans){
    cout << i << " ";
  }
  cout << '\n';
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // int t;
  // cin>>t;
  // while(t--)
  // {
    
  // }

  solve();
}

  
