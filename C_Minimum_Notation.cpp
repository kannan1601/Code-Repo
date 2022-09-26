#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
void solve()
{	
	string s;
  cin >> s;
  map<char,ll> pos;
  multiset<char> ms;

  for(int i = 0; i < s.size(); i++)
  {
    pos[s[i]] = i;
  }
  ll curr = 0;
  for(char c = '0'; c <= '9'; c++)
  {
    if(pos.find(c) == pos.end())
      continue;
    for(; curr <= pos[c]; curr++)
    {
      if(s[curr] == c || s[curr] == '9')
        ms.insert(s[curr]);
      else
        ms.insert(s[curr] + 1);
    }
  }
  for(auto it : ms)
  cout<<it;

  cout<<"\n";
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

	
