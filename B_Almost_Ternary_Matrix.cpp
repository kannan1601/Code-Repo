#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
void solve()
{	
	int n,m;
  cin>>n>>m;
  int black = 1,white = 0;
  int a[n][m];
  for(int i = 0; i < n; i+=2)
  {
    for(int j = 0; j < m; j+=2)
    {
      if((i+j) % 4 == 0)
      {
        a[i][j] = black;
        a[i][j+1] = white;
        a[i+1][j] = white;
        a[i+1][j+1] = black;
      }
      else
      {
        a[i][j] = white;
        a[i][j+1] = black;
        a[i+1][j] = black;
        a[i+1][j+1] = white;
      }
    }
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
  
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

	
