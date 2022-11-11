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
	int n, q;
  cin >> n >> q;
  vector<int> a(n + 1);
  vector<int> freq(51, 0);
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    if(freq[a[i]] == 0){
      freq[a[i]] = i;
    }
  }
  // for(auto i : freq){
  //   cout << i <<" ";
  // }
  while(q--){
    int x;
    cin >> x;
    cout << freq[x] << " ";
    for(int i = 1; i <= 50; i++){
      if(freq[i] < freq[x]){
        freq[i]++;
      }
    }
    freq[x] = 1;
  }
  cout << "\n";
    
   
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

	
