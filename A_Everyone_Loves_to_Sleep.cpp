#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{	
  int n,h,m;
  cin>>n>>h>>m;
  int time = h*60 + m;
  int ans = 24*60;
  for(int i=1; i<=n; i++)
  {
    cin>>h>>m;
    int t = h*60 + m - time;
    if(t<0)t+=24*60;
    ans = min(ans,t);
  }
  cout<<ans/60<<" "<<ans%60<<"\n";
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

	
