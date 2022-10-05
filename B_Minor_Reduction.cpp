#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
const ll INF = 2e18;
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }

void solve()
{	
  string s;
  cin >> s;
  ll n = s.size();
  for(int i = n - 1; i >= 1; i--)
  {
    int x = s[i] - '0';
    int y = s[i - 1] - '0';
    int z = x + y;
    
    if(z >= 10)
    {
      int first = z / 10;
      int second = z % 10;
     
      char u = char(first) + '0';
      char v = char(second) + '0';
     
      s[i - 1] = u;
      s[i] = v;

      
      cout << s <<"\n";
      return;
    }
  }
  cout << (s[0] - '0') + (s[1] - '0');
  for(int i = 2; i < n; i++)
  {
    cout << s[i];
  }
  cout << '\n';

  
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

	
