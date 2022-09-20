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
	ll n, x, y;
  cin>>n>>x>>y;
  int a = max(x,y);
  if(x == 0 && y == 0)
  {
    cout<<"-1\n";
    return;
  }
  if((n - 1) % a)
  {
    cout<<"-1\n";
    return;
  }
  if( (x == 0) ^ (y == 0))
  {
    int count = 1;
    for(int i = 2; count <= n - 1; i+=a)
    {
      for(int j = 0; j < a; j++)
      {
        cout<<i<<" ";
        count++;
      }
      
    }
    cout<<"\n";
  }
  else 
  {
    cout<<"-1\n";
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

	
