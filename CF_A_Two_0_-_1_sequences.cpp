#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	int n,m;
  cin>>n>>m;
  string s1,s2;
  cin>>s1>>s2;
  int x=n-m;
  int mn=INT_MAX;
  int mx=INT_MIN;
  for(int i=0;i<=x;i++)
  {
    int y=s1[i]-48;
    mn=min(y,mn);
    mx=max(y,mx);
  }
  if(s2[0]=='0')
  {
      if(mn==0)
      {
        s1[x]='0';
      }
      else{
        cout<<"NO\n";
        return;
      }
  }
  else{
    if(mx==1)
    {
      s1[x]='1';
    }
    else
    {
      cout<<"NO\n";
      return;
    }
  }
  for(int i=x;i<n;i++)
  {
    if(s1[i]!=s2[i-x])
    {
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
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

	
