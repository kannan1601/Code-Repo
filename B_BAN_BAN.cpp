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
	ll n;
  cin >> n;
  
  if(n == 1){
    cout << "1\n";
    cout << "1 2\n";
    return;
  }
  ll ans = ceil(n / 2.0);
  cout << ans <<"\n";
  int tmp = 3*n;
  int cnt = 1;
  if(n % 2 == 0){
    for(int i = 1; i <= ans; i++){
      cout << cnt << " " << tmp <<" ";
      cnt+=3;
      tmp-=3;
    }
    cout << "\n";
  }
  else{
     for(int i = 1; i <= ans - 1; i++){
      cout << cnt << " " << tmp <<" ";
      cnt+=3;
      tmp-=3;
    }
    cout << 3*n/2 << " " << 3*n/2 + 2;
    cout << "\n";
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

	
