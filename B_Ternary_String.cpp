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

bool valid(int l, int r, string S){
  set<char> st;
  for(int i = l; i <= r; i++){
    st.insert(S[i]);
  }
  // cout <<"printing set\n";
  if(st.size() == 3){
    // for(auto i : st){
    //   cout << i;
    // }
    // cout << "\n";
    return true;
  }
  return false;
}


void solve()
{
	string S;
  cin >> S;
  int N = S.length();
  // vector<int> freq(4, 0);
  // int distinct = 0;
  // int ans = INT_MAX;
  // for(int i = 0, j = 0; i < N; i++){
  //   while(j < N && distinct < 3){
  //     if(freq[S[j] - '0']++ == 0)
  //       distinct++;
  //     j++;
  //   }
  //   if(distinct == 3)
  //     ans = min(ans, j - i);
  //   if(--freq[S[i] - '0'] == 0)
  //     distinct--;
  // }
  // cout << (ans == INT_MAX ? 0 : ans);
  // cout << "\n";

  int ans = INT_MAX;
  int l = 0, r = N - 1;
  while(l + 1 < r){
    int mid = (l + r) / 2;
    // cout << "L is " << l << " R is " << r << '\n';
    if(valid(l, mid, S)){
      r = mid;
      ans = min(ans, r - l + 1); 
      
    }
    else{
      l = mid;
    }
  }
  cout << (ans == INT_MAX ? 0 : ans);
  cout << '\n';
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

	
