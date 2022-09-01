#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
  ll n,m,sx,sy,d;
  cin>>n>>m>>sx>>sy>>d;
  ll ans = n+m-2;
  ll dis = abs((n-sx)+(m-sy));
  if(dis<=d)
  {
    cout<<"-1\n";
    return;
  }
  ll x = sx-1;
  ll y = m-sy;
  if(x > d && y > d)
  {
    cout<<ans<<"\n";
    return;
  }
   x = n-sx;
   y = sy-1;
  if(x > d && y > d)
  {
    cout<<ans<<"\n";
    return;
  }
  cout<<"-1\n";
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

	
