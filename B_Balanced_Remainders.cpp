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
	int n;
  cin >> n;
  int a[n];
  int c[3] = {0,0,0};
  for(int i = 0; i < n; i++)
  {
     cin >> a[i];
     c[a[i] % 3]++;
  }

  int moves = 0;
  while(1)
  {
    for(int i = 0; i < 3; i++)
    {
      if(c[i] > n/3)
      {
        int diff = c[i] - n/3;
        c[(i+1) % 3] += diff;
        moves+=diff;
        c[i]-=diff;
      }
    }
    int stop = 1;
    for(int i = 0; i < 3; i++)
    {
      if(c[i] != n/3)
      {
        stop = 0;
      }
    }
    if(stop)
    {
      cout << moves <<"\n";
      break;
    }
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

	
