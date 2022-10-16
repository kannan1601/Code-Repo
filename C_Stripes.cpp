#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
const ll INF = 1e18;
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }

void solve()
{	
	vector<vector<char>> a(8,vector<char>(8,'.'));
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < 8; i++)
  {
    int red = 0;
    for(int j = 0; j < 8; j++)
    {
      if(a[i][j] != 'R')
      {
        break;
      }
      else
        red++;
    }
    if(red == 8)
    {
      cout << "R\n";
      return;
    }
  }
  cout << "B\n";
  
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

	
