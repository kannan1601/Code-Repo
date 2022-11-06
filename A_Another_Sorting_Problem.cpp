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
  int n, m;
  cin >> n >> m;
  vector<string> arr(n);
  for(int i = 0; i < n; i++)
    cin >> arr[i];
  vector<int> indx(n);
  iota(indx.begin(), indx.end(), 0);
  int cur = 0;
  sort(indx.begin(), indx.end(), [&](int a, int b){
    int cur = 0;
    for(int i = 0; i < m; i++){
      if(cur == 0){
        if(arr[a][i] < arr[b][i])
          return true;
        if(arr[a][i] > arr[b][i])
          return false;
      }
      else{
        if(arr[a][i] > arr[b][i])
          return true;
        if(arr[a][i] < arr[b][i])
          return false;
      }
      cur^=1;
    }
  });

  for(auto i : indx){
     cout << i + 1 <<" ";
  }
  cout <<"\n";

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

	
