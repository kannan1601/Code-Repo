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
  int n;
  cin >> n;
  vector<int> a(n);
  set<int> s;
  for(int i = 0; i < n; i++){
    s.insert(i + 1);
    cin >> a[i];
  }
  int i = n - 1;
  while(!s.empty()){
    int cur = *s.rbegin();
    vector<int>ans;
    while(a[i] != cur){
      ans.pb(a[i]);
      i--;
    }
    ans.pb(a[i]);
    i--;
    reverse(ans.begin(), ans.end());
    for(auto i : ans){
      cout << i <<" ";
      s.erase(i);
    }
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

	
