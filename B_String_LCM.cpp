#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}
vector<ll> sieve(int n) {int arr[n];for(int i = 0; i < n; i++)arr[i] = 0; vector<ll> vect; for (int i = 2; i * i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1;} return vect;}

void solve()
{	
	string s, t;
  cin >> s >> t;
  if(s.size() == t.size())
  {
    if(s == t)
      cout << s <<"\n";
    else
      cout <<"-1\n";
    return;
  }
  if(s.size() > t.size())
    swap(s,t);
  int n = s.size();
  int m = t.size();
  int lcm = (n * m) / __gcd(n, m);
  string ans = "";
  int k = 0;
  for(int i = 0; i < lcm; i++)
  {
    ans+=(char)s[k];
    k++;
    k%=n;
  }
  k = 0;
  for(int i = 0; i < lcm; i++){
    if(ans[i] != t[k])
    {
      cout << "-1\n";
      return;
    }
    else{
      k++;
      k%=m;
    }
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

	
