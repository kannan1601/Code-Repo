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
	ll n;
  cin >> n;
  string s;
  cin >> s;
  int i = 0;
  int j = n - 1;
  int p = 0;
  deque<char>a;
  while(i <= j)
  {
    if(!p)
    {
      if(s[i] == '1')
      {
        a.push_back(s[i]);
      }
      else
      {
        a.push_front(s[i]);
      }
      i++;
    }
    else
    {
      if(s[j] == '1')
      {
        a.push_front(s[j]);
      }
      else
      {
        a.push_back(s[j]);
      }
      j--;
    }
    p^=1;
    
  }

  for(auto it : a)
  {
    cout << it;
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

	
