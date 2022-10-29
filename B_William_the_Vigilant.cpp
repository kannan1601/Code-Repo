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
	int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  int cnt = 0;
  for(int i = 0; i < n - 2; i++)
  {
    if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
      cnt++;
  }
  while(q--)
  {
    int pos;
    cin >> pos;
    char c;
    cin >> c;
    pos--;
    int start = max(0,pos - 2);
    int end = min(n - 1, pos + 2);
    for(int i = start; i <= end - 2; i++)
    {
      if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
        cnt--;
    }
    s[pos] = c;
     for(int i = start; i <= end - 2; i++)
    {
      if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
        cnt++;
    }
    cout << cnt <<"\n";
  }

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// int t;
	// cin>>t;
	// while(t--)
	// {
	// 	solve();
	// }
  solve();
}

	
