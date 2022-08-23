#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
  ll n,m;
  cin>>n>>m;
  int a[n][m];
  string st="";
  int s=0,one = 0;
  for(int i=0; i<n; i++)
  {
    cin>>st;
    for(int j=0; j<m; j++)
    {
        a[i][j]=st[j]-48;
        s+=a[i][j];
        if(a[i][j]==1)
        one++;
    }
  }
 
  int mx = INT_MIN;
  int sum = 4;
  for(int i=0; i<n-1; i++)
  {
    for(int j=0; j<m-1; j++)
    {
      int cnt = a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
      mx = max(mx,sum-cnt);
    }
  }
  if(sum == 0)
  {
    cout<<"0\n";
    return;
  }
  if(mx >= 2)
  {
    cout<<one<<"\n";
  }
  else if(mx == 1)
  {
    cout<<one-1<<"\n";
  }
  else
  cout<<one-2<<"\n";

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

	
