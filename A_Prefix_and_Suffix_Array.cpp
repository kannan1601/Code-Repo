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

bool comp(string &a, string &b){
  return a.length() < b.length();
}

void solve()
{
	 int N;
   cin >> N;
   vector<string> A(2*N - 2);
   vector<string> big;
   vector<string> small;
   for(int i = 0; i < 2*N - 2; i++){
    cin >> A[i];
    if(A[i].length() == N - 1){
      big.pb(A[i]);
    }
    if(A[i].length() == 1){
     small.pb(A[i]);
    }
   }
   if(small[0] == small[1]){
    reverse(all(big[0]));
    if(big[0] == big[1]){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
   }
   else{
    cout << "NO\n";
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

	
