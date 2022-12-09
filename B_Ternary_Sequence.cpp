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
bool mapcomp(pair<int,int> &a, pair<int,int> &b){return a.second > b.second;}

const ll MOD = 1000000007;

void solve()
{
  ll x0, x1, x2, y0, y1, y2;
  cin >> x0 >> x1 >> x2 >> y0 >> y1 >> y2;
  ll sum = 0, m = INT64_MAX;
  // m = min(x0, y2);
  // x0-=m;
  // y2-=m;

  // m = min(x1, y0);
  // x1-=m;
  // y0-=m;

  // m = min(x2, y1);
  // x2-=m;
  // y1-=m;
  // sum+=2*m;

  // sum-=(2 * min(x1, y2));
  // cout << sum <<"\n"; 

  ll score = min(x2, y1);
  x2-=score;
  y1-=score;
  score*=2;

  x0+=x2;
  x2=0;

  ll sub = min(y2, x0);
  y2-=sub;
  x0-=sub;

  ll losepoints = min(y2, x1);
  losepoints*=2;
  cout << score - losepoints <<"\n";

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

	
