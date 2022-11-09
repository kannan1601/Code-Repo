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
	int k, n, m;
  cin >> k >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for(int i = 0; i < n; i++)  
    cin >> a[i];
  for(int i = 0; i < m; i++)
    cin >> b[i];
  int i = 0, j = 0;
  vector<int> ans;
  while(i < n && j < m){
    if(a[i] == 0){
      ans.pb(0);
      i++;
      k++;
    }
    else if(b[j] == 0){
      ans.pb(0);
      j++;k++;
    }
    else if(a[i] < b[j]){
      if(a[i] > k){
        cout << "-1\n";
        return;
      }
      else{
        ans.pb(a[i]);
        i++;
      }
    }
    else{
      if(b[j] > k){
        cout <<"-1\n";
        return;
      }
      else{
       
        ans.pb(b[j]);
        j++;
      }
    }
  }
  if(i < n){
    while(i < n){
      if(a[i] == 0){
       
        ans.pb(0);
        k++;i++;
      }
      else if(a[i] <= k){
        
        ans.pb(a[i]);
        i++;
      }
      else{
        cout << "-1\n";
        return;
      }
    }
  }
  if(j < m){
    while(j < m){
      if(b[j] == 0){
        
        ans.pb(0);
        k++;j++;
      }
      else if(b[j] <= k){
        ans.pb(b[j]);
        j++;
      }
      else{
        cout << "-1\n";
        return;
      }
    }
  }

  for(auto it : ans){
    cout << it <<" ";
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

	
