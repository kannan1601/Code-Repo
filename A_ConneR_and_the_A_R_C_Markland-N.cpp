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
  int N, S, K;
  cin >> N >> S >> K;
  map<ll,int> mpp;
  for(int i = 1; i <= K; i++){
    int x;
    cin >> x;
    mpp[x]++;
  }

  if(mpp.find(S) == mpp.end()){
    cout << "0\n";
    return;
  }
  ll left = S - 1;
  ll right = S + 1;
  ll ans1 = INT64_MAX;
  ll ans2 = INT64_MAX;
  while(left){
    if(mpp.find(left) == mpp.end()){
      ans1 = S - left;
      break;
    }
    left--;
  }
  while(right <= N){
    if(mpp.find(right) == mpp.end()){
      ans2 = right - S;
      break;
    }
    right++;
  }
  cout << min(ans1, ans2) <<"\n";
  
  
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

	
