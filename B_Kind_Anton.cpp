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
	int N;
  cin >> N;
  vector<int> A(N), B(N);
  for(int i = 0; i < N; i++)
    cin >> A[i];
  for(int i = 0; i < N; i++)
    cin >> B[i];
  int haveplus = 0, haveminus = 0;
  for(int i = 0; i < N; i++){
    if(A[i] < B[i] && !haveplus){
      cout << "NO\n";
      return;
    }
    else if(A[i] > B[i] && !haveminus){
      cout << "NO\n";
      return;
    }
    if(A[i] == 1) haveplus = 1;
    if(A[i] == -1) haveminus = 1;
  }
  cout << "YES\n";
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

	
