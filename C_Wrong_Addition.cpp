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
		string A, S;
    cin >> A >> S;
    int Asz = A.length();
    int Ssz = S.length();
    if(Ssz < Asz){
      // cout << "first\n";
      cout << "-1\n";
      return;
    }
    string ans = "";
    int i = Asz - 1;
    int j = Ssz - 1;
    while(i >= 0 && j >= 0){
     if(A[i] <= S[j]){
      int x = S[j] - '0';
      int y = A[i] -'0';
      ans = to_string(x - y) + ans;
      i--;
      j--;
     }
     else{
      if(j == 0){
        // cout << "second\n";
        cout << "-1\n"; return;
      }
      int x = A[i] - '0';
      int y = (S[j - 1] - '0') * 10 + S[j] - '0';
      if(y - x > 9 || y - x < 0){
        // cout << "third\n";
        cout << "-1\n";
        return;
      }
      ans = to_string(y - x) + ans;
      i--;
      j -= 2;
     }
    }
    if(i >= 0){
      cout << "-1\n";
      return;
    }
    while(j >= 0){
      ans = S[j] + ans;
      j--;
    }
    while(ans.size() && ans[0] == '0'){
      ans.erase(ans.begin());
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

	
