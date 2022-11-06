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
  string s;
  cin >> s;
  ll ones = 0, zeros = 0;
  for(ll i = 0; i < n; i++){
    if(s[i] == '0')
      zeros++;
    else
      ones++;
  }
  ll whole = zeros * ones;
  ll onemx = INT64_MIN, onecnt = 0;
  ll zeromx = INT64_MIN,zerocnt = 0;
  for(ll i = 0; i < n; i++){
    if(s[i] == '1')
      onecnt++;
    else{
      onemx = max(onemx, onecnt);
      onecnt = 0;
    }
  }onemx = max(onemx, onecnt);
  for(int i = 0; i < n; i++){
    if(s[i] == '0')
      zerocnt++;
    else{
      zeromx = max(zeromx, zerocnt);
      zerocnt = 0;
    }
  }zeromx = max(zeromx, zerocnt);
  ll onemax = onemx*onemx;
  ll zeromax = zeromx*zeromx;
  if(whole > onemax && whole > zeromax){
    cout << whole <<"\n";
    return;
  }
  if(onemax > zeromax){
    cout << onemax <<"\n";
    return;
  }
  cout << zeromax <<"\n";
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

	
